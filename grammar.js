function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}

module.exports = grammar({
    name: "djangotemplate",

    extras: ($) => [" ", "\t"],

    rules: {
        template: ($) => repeat($._node),

        _node: ($) => choice($.block, $.tag, $.variable, $.comment, $.text),

        filter: ($) =>
            seq(
                alias($._name, $.filter_name),
                optional(seq(":", alias($._value, $.arg)))
            ),

        filters: ($) => sep1($.filter, "|"),

        variable: ($) =>
            seq("{{", alias($._value, $.var_name), optional(seq("|", $.filters)), "}}"),

        arg: ($) => seq($._value, optional(seq("|", $.filters))),

        kwarg: ($) => seq(alias($._name, $.name), "=", $.arg),

        comment: ($) => token(seq("{#", /.*/, "#}")),

        _tag_arg: ($) =>
            choice($.keyword, $.operator, $.keyword_operator, $.arg, $.kwarg),

        tag: ($) =>
            seq(
                "{%",
                alias($._name, $.tag_name),
                alias(repeat($._tag_arg), $.arguments),
                "%}"
            ),

        block: ($) => {
            const tag_names = [
                "autoescape",
                "block",
                "blocktranslate",
                "comment",
                "filter",
                "for",
                "if",
                "ifchanged",
                "spaceless",
                "verbatim",
                "with",
            ];
            return choice(
                ...tag_names.map((name) =>
                    seq(
                        "{%",
                        alias(name, $.start_tag),
                        alias(repeat($._tag_arg), $.arguments),
                        "%}",

                        alias(repeat($._node), $.body),

                        "{%",
                        alias("end" + name, $.end_tag),
                        optional($._name),
                        "%}"
                    )
                )
            );
        },

        _name: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

        identifier: ($) => sep1($._name, "."),

        string: ($) => choice(/"[^"]*"/, /'[^']*'/),

        number: ($) => /[\+\-]?[0-9\.]+/,

        boolean: ($) => choice("True", "False"),

        _value: ($) => choice($.string, $.number, $.boolean, $.builtin, $.identifier),

        keyword: ($) =>
            choice(
                // autoescape
                "on",
                "off",
                // cycle
                "silent",
                // include
                "with",
                "only",
                // load
                "from",
                // lorem
                "random",
                // now and regroup
                "as",
                // regroup
                "by",
                // templatetag
                "openblock",
                "closeblock",
                "openvariable",
                "closevariable",
                "openbrace",
                "closebrace",
                "opencomment",
                "closecomment"
            ),

        operator: ($) => choice("==", "!=", "<", ">", "<=", ">="),

        keyword_operator: ($) =>
            choice("and", "or", "not", "in", "not in", "is", "is not"),

        builtin: ($) =>
            choice(
                "None",
                "forloop.counter",
                "forloop.counter0",
                "forloop.revcounter",
                "forloop.revcounter0",
                "forloop.first",
                "forloop.last",
                "forloop.parentloop"
            ),

        text: (_) => /([^{]|\{[^{%#])+/,
    },
});
