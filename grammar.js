function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}

function block($, name) {
    let body = null;
    let args = null;

    if ((name == "block") || (name == "verbatim")) {
        // Block and verbatim tags allow arbitrary names (not identifiers), for example
        // `pre-content` or emoji.
        args = alias(repeat($.name), $.arguments);
    }
    else {
        args = alias(repeat($._tag_arg), $.arguments)
    }

    if (name == "comment") {
        // Embed the (comment_text) inside a (body) to match other blocks.
        body = alias(repeat(alias($._comment_block_text, $.comment_text)), $.body);
    } else if (name == "verbatim") {
        // Embed the (text) inside a (body) to match other blocks.
        body = alias(repeat(alias($._verbatim_block_text, $.text)), $.body);
    } else {
        body = alias(repeat($._node), $.body);
    }

    return seq(
        "{%",
        alias(name, $.start_tag),
        args,
        "%}",
        body,
        "{%",
        alias("end" + name, $.end_tag),
        alias(optional($.name), ""),
        "%}",
    );
}

module.exports = grammar({
    name: "djangotemplate",

    extras: ($) => [" ", "\t"],

    externals: ($) => [
        $._comment_block_text,
        $._verbatim_block_text,
        $._inline_comment,
    ],

    rules: {
        template: ($) => repeat($._node),

        _node: ($) => choice($.block, $.tag, $.variable, $.comment, $.text),

        filter: ($) =>
            seq(
                alias($._identifier, $.filter_name),
                optional(seq(":", alias($._value, $.arg))),
            ),

        filters: ($) => sep1($.filter, "|"),

        variable: ($) =>
            seq("{{", alias($._value, $.var_name), optional(seq("|", $.filters)), "}}"),

        arg: ($) => seq($._value, optional(seq("|", $.filters))),

        kwarg: ($) => seq(alias($._identifier, $.name), "=", $.arg),

        comment: ($) => $._inline_comment,

        _tag_arg: ($) =>
            choice($.keyword, $.operator, $.keyword_operator, $.arg, $.kwarg),

        tag: ($) =>
            seq(
                "{%",
                alias($._identifier, $.tag_name),
                alias(repeat($._tag_arg), $.arguments),
                "%}",
            ),

        block: ($) => {
            const tag_names = [
                "autoescape",
                "block",
                "blocktrans",
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
            return choice(...tag_names.map((name) => block($, name)));
        },

        name: ($) => /[^{}%#\s]+/u,

        _identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

        identifier: ($) => sep1($._identifier, "."),

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
                "closecomment",
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
                "forloop.length",
                "forloop.parentloop",
            ),

        text: ($) => /([^{]|\{[^{%#])+/,
    },
});
