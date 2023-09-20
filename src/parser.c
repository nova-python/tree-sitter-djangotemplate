#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 310
#define LARGE_STATE_COUNT 51
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 6
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_COLON = 1,
  anon_sym_PIPE = 2,
  anon_sym_LBRACE_LBRACE = 3,
  anon_sym_RBRACE_RBRACE = 4,
  anon_sym_EQ = 5,
  sym_comment = 6,
  anon_sym_LBRACE_PERCENT = 7,
  anon_sym_PERCENT_RBRACE = 8,
  anon_sym_autoescape = 9,
  anon_sym_endautoescape = 10,
  anon_sym_block = 11,
  anon_sym_endblock = 12,
  anon_sym_blocktranslate = 13,
  anon_sym_endblocktranslate = 14,
  anon_sym_comment = 15,
  anon_sym_endcomment = 16,
  anon_sym_filter = 17,
  anon_sym_endfilter = 18,
  anon_sym_for = 19,
  anon_sym_endfor = 20,
  anon_sym_if = 21,
  anon_sym_endif = 22,
  anon_sym_ifchanged = 23,
  anon_sym_endifchanged = 24,
  anon_sym_spaceless = 25,
  anon_sym_endspaceless = 26,
  anon_sym_verbatim = 27,
  anon_sym_endverbatim = 28,
  anon_sym_with = 29,
  anon_sym_endwith = 30,
  sym__name = 31,
  anon_sym_DOT = 32,
  aux_sym_string_token1 = 33,
  aux_sym_string_token2 = 34,
  sym_number = 35,
  anon_sym_True = 36,
  anon_sym_False = 37,
  anon_sym_on = 38,
  anon_sym_off = 39,
  anon_sym_silent = 40,
  anon_sym_only = 41,
  anon_sym_from = 42,
  anon_sym_random = 43,
  anon_sym_as = 44,
  anon_sym_by = 45,
  anon_sym_openblock = 46,
  anon_sym_closeblock = 47,
  anon_sym_openvariable = 48,
  anon_sym_closevariable = 49,
  anon_sym_openbrace = 50,
  anon_sym_closebrace = 51,
  anon_sym_opencomment = 52,
  anon_sym_closecomment = 53,
  anon_sym_EQ_EQ = 54,
  anon_sym_BANG_EQ = 55,
  anon_sym_LT = 56,
  anon_sym_GT = 57,
  anon_sym_LT_EQ = 58,
  anon_sym_GT_EQ = 59,
  anon_sym_and = 60,
  anon_sym_or = 61,
  anon_sym_not = 62,
  anon_sym_in = 63,
  anon_sym_notin = 64,
  anon_sym_is = 65,
  anon_sym_isnot = 66,
  anon_sym_None = 67,
  anon_sym_forloop_DOTcounter = 68,
  anon_sym_forloop_DOTcounter0 = 69,
  anon_sym_forloop_DOTrevcounter = 70,
  anon_sym_forloop_DOTrevcounter0 = 71,
  anon_sym_forloop_DOTfirst = 72,
  anon_sym_forloop_DOTlast = 73,
  anon_sym_forloop_DOTparentloop = 74,
  sym_text = 75,
  sym_template = 76,
  sym__node = 77,
  sym_filter = 78,
  sym_filters = 79,
  sym_variable = 80,
  sym_arg = 81,
  sym_kwarg = 82,
  sym__tag_arg = 83,
  sym_tag = 84,
  sym_block = 85,
  sym_identifier = 86,
  sym_string = 87,
  sym_boolean = 88,
  sym__value = 89,
  sym_keyword = 90,
  sym_operator = 91,
  sym_keyword_operator = 92,
  sym_builtin = 93,
  aux_sym_template_repeat1 = 94,
  aux_sym_filters_repeat1 = 95,
  aux_sym_tag_repeat1 = 96,
  aux_sym_identifier_repeat1 = 97,
  alias_sym_arguments = 98,
  alias_sym_body = 99,
  alias_sym_filter_name = 100,
  alias_sym_name = 101,
  alias_sym_tag_name = 102,
  alias_sym_var_name = 103,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_EQ] = "=",
  [sym_comment] = "comment",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_autoescape] = "start_tag",
  [anon_sym_endautoescape] = "end_tag",
  [anon_sym_block] = "start_tag",
  [anon_sym_endblock] = "end_tag",
  [anon_sym_blocktranslate] = "start_tag",
  [anon_sym_endblocktranslate] = "end_tag",
  [anon_sym_comment] = "start_tag",
  [anon_sym_endcomment] = "end_tag",
  [anon_sym_filter] = "start_tag",
  [anon_sym_endfilter] = "end_tag",
  [anon_sym_for] = "start_tag",
  [anon_sym_endfor] = "end_tag",
  [anon_sym_if] = "start_tag",
  [anon_sym_endif] = "end_tag",
  [anon_sym_ifchanged] = "start_tag",
  [anon_sym_endifchanged] = "end_tag",
  [anon_sym_spaceless] = "start_tag",
  [anon_sym_endspaceless] = "end_tag",
  [anon_sym_verbatim] = "start_tag",
  [anon_sym_endverbatim] = "end_tag",
  [anon_sym_with] = "with",
  [anon_sym_endwith] = "end_tag",
  [sym__name] = "_name",
  [anon_sym_DOT] = ".",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_number] = "number",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [anon_sym_silent] = "silent",
  [anon_sym_only] = "only",
  [anon_sym_from] = "from",
  [anon_sym_random] = "random",
  [anon_sym_as] = "as",
  [anon_sym_by] = "by",
  [anon_sym_openblock] = "openblock",
  [anon_sym_closeblock] = "closeblock",
  [anon_sym_openvariable] = "openvariable",
  [anon_sym_closevariable] = "closevariable",
  [anon_sym_openbrace] = "openbrace",
  [anon_sym_closebrace] = "closebrace",
  [anon_sym_opencomment] = "opencomment",
  [anon_sym_closecomment] = "closecomment",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_in] = "in",
  [anon_sym_notin] = "not in",
  [anon_sym_is] = "is",
  [anon_sym_isnot] = "is not",
  [anon_sym_None] = "None",
  [anon_sym_forloop_DOTcounter] = "forloop.counter",
  [anon_sym_forloop_DOTcounter0] = "forloop.counter0",
  [anon_sym_forloop_DOTrevcounter] = "forloop.revcounter",
  [anon_sym_forloop_DOTrevcounter0] = "forloop.revcounter0",
  [anon_sym_forloop_DOTfirst] = "forloop.first",
  [anon_sym_forloop_DOTlast] = "forloop.last",
  [anon_sym_forloop_DOTparentloop] = "forloop.parentloop",
  [sym_text] = "text",
  [sym_template] = "template",
  [sym__node] = "_node",
  [sym_filter] = "filter",
  [sym_filters] = "filters",
  [sym_variable] = "variable",
  [sym_arg] = "arg",
  [sym_kwarg] = "kwarg",
  [sym__tag_arg] = "_tag_arg",
  [sym_tag] = "tag",
  [sym_block] = "block",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym__value] = "_value",
  [sym_keyword] = "keyword",
  [sym_operator] = "operator",
  [sym_keyword_operator] = "keyword_operator",
  [sym_builtin] = "builtin",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_filters_repeat1] = "filters_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [alias_sym_arguments] = "arguments",
  [alias_sym_body] = "body",
  [alias_sym_filter_name] = "filter_name",
  [alias_sym_name] = "name",
  [alias_sym_tag_name] = "tag_name",
  [alias_sym_var_name] = "var_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_autoescape] = anon_sym_autoescape,
  [anon_sym_endautoescape] = anon_sym_endautoescape,
  [anon_sym_block] = anon_sym_autoescape,
  [anon_sym_endblock] = anon_sym_endautoescape,
  [anon_sym_blocktranslate] = anon_sym_autoescape,
  [anon_sym_endblocktranslate] = anon_sym_endautoescape,
  [anon_sym_comment] = anon_sym_autoescape,
  [anon_sym_endcomment] = anon_sym_endautoescape,
  [anon_sym_filter] = anon_sym_autoescape,
  [anon_sym_endfilter] = anon_sym_endautoescape,
  [anon_sym_for] = anon_sym_autoescape,
  [anon_sym_endfor] = anon_sym_endautoescape,
  [anon_sym_if] = anon_sym_autoescape,
  [anon_sym_endif] = anon_sym_endautoescape,
  [anon_sym_ifchanged] = anon_sym_autoescape,
  [anon_sym_endifchanged] = anon_sym_endautoescape,
  [anon_sym_spaceless] = anon_sym_autoescape,
  [anon_sym_endspaceless] = anon_sym_endautoescape,
  [anon_sym_verbatim] = anon_sym_autoescape,
  [anon_sym_endverbatim] = anon_sym_endautoescape,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_endwith] = anon_sym_endautoescape,
  [sym__name] = sym__name,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_number] = sym_number,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_silent] = anon_sym_silent,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_random] = anon_sym_random,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_openblock] = anon_sym_openblock,
  [anon_sym_closeblock] = anon_sym_closeblock,
  [anon_sym_openvariable] = anon_sym_openvariable,
  [anon_sym_closevariable] = anon_sym_closevariable,
  [anon_sym_openbrace] = anon_sym_openbrace,
  [anon_sym_closebrace] = anon_sym_closebrace,
  [anon_sym_opencomment] = anon_sym_opencomment,
  [anon_sym_closecomment] = anon_sym_closecomment,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_notin] = anon_sym_notin,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_isnot] = anon_sym_isnot,
  [anon_sym_None] = anon_sym_None,
  [anon_sym_forloop_DOTcounter] = anon_sym_forloop_DOTcounter,
  [anon_sym_forloop_DOTcounter0] = anon_sym_forloop_DOTcounter0,
  [anon_sym_forloop_DOTrevcounter] = anon_sym_forloop_DOTrevcounter,
  [anon_sym_forloop_DOTrevcounter0] = anon_sym_forloop_DOTrevcounter0,
  [anon_sym_forloop_DOTfirst] = anon_sym_forloop_DOTfirst,
  [anon_sym_forloop_DOTlast] = anon_sym_forloop_DOTlast,
  [anon_sym_forloop_DOTparentloop] = anon_sym_forloop_DOTparentloop,
  [sym_text] = sym_text,
  [sym_template] = sym_template,
  [sym__node] = sym__node,
  [sym_filter] = sym_filter,
  [sym_filters] = sym_filters,
  [sym_variable] = sym_variable,
  [sym_arg] = sym_arg,
  [sym_kwarg] = sym_kwarg,
  [sym__tag_arg] = sym__tag_arg,
  [sym_tag] = sym_tag,
  [sym_block] = sym_block,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym__value] = sym__value,
  [sym_keyword] = sym_keyword,
  [sym_operator] = sym_operator,
  [sym_keyword_operator] = sym_keyword_operator,
  [sym_builtin] = sym_builtin,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_filters_repeat1] = aux_sym_filters_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [alias_sym_arguments] = alias_sym_arguments,
  [alias_sym_body] = alias_sym_body,
  [alias_sym_filter_name] = alias_sym_filter_name,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
  [alias_sym_var_name] = alias_sym_var_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoescape] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endautoescape] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endblock] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_blocktranslate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endblocktranslate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endcomment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endfilter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ifchanged] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endifchanged] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_spaceless] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endspaceless] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_verbatim] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endverbatim] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endwith] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_silent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_random] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_openblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_closeblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_openvariable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_closevariable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_openbrace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_closebrace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opencomment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_closecomment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_None] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forloop_DOTcounter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forloop_DOTcounter0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forloop_DOTrevcounter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forloop_DOTrevcounter0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forloop_DOTfirst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forloop_DOTlast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forloop_DOTparentloop] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_filters] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_kwarg] = {
    .visible = true,
    .named = true,
  },
  [sym__tag_arg] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_body] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_filter_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_var_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_var_name,
  },
  [2] = {
    [1] = alias_sym_tag_name,
  },
  [3] = {
    [0] = alias_sym_filter_name,
  },
  [4] = {
    [1] = alias_sym_tag_name,
    [2] = alias_sym_arguments,
  },
  [5] = {
    [0] = alias_sym_name,
  },
  [6] = {
    [0] = alias_sym_filter_name,
    [2] = sym_arg,
  },
  [7] = {
    [1] = anon_sym_autoescape,
  },
  [8] = {
    [1] = anon_sym_autoescape,
    [3] = alias_sym_body,
  },
  [9] = {
    [1] = anon_sym_autoescape,
    [2] = alias_sym_arguments,
  },
  [10] = {
    [1] = anon_sym_autoescape,
    [2] = alias_sym_arguments,
    [4] = alias_sym_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__value, 3,
    sym__value,
    alias_sym_var_name,
    sym_arg,
  aux_sym_template_repeat1, 2,
    aux_sym_template_repeat1,
    alias_sym_body,
  aux_sym_tag_repeat1, 2,
    aux_sym_tag_repeat1,
    alias_sym_arguments,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 9,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 2,
  [27] = 27,
  [28] = 6,
  [29] = 23,
  [30] = 10,
  [31] = 19,
  [32] = 11,
  [33] = 27,
  [34] = 12,
  [35] = 35,
  [36] = 25,
  [37] = 3,
  [38] = 13,
  [39] = 7,
  [40] = 35,
  [41] = 18,
  [42] = 24,
  [43] = 17,
  [44] = 22,
  [45] = 16,
  [46] = 21,
  [47] = 15,
  [48] = 5,
  [49] = 14,
  [50] = 4,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 74,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 119,
  [121] = 117,
  [122] = 114,
  [123] = 118,
  [124] = 111,
  [125] = 108,
  [126] = 116,
  [127] = 105,
  [128] = 104,
  [129] = 115,
  [130] = 103,
  [131] = 102,
  [132] = 113,
  [133] = 101,
  [134] = 100,
  [135] = 112,
  [136] = 77,
  [137] = 98,
  [138] = 110,
  [139] = 139,
  [140] = 109,
  [141] = 107,
  [142] = 106,
  [143] = 99,
  [144] = 96,
  [145] = 93,
  [146] = 97,
  [147] = 95,
  [148] = 94,
  [149] = 92,
  [150] = 91,
  [151] = 89,
  [152] = 88,
  [153] = 86,
  [154] = 85,
  [155] = 83,
  [156] = 82,
  [157] = 90,
  [158] = 87,
  [159] = 84,
  [160] = 81,
  [161] = 78,
  [162] = 80,
  [163] = 139,
  [164] = 79,
  [165] = 165,
  [166] = 165,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 168,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 169,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 185,
  [213] = 213,
  [214] = 214,
  [215] = 186,
  [216] = 188,
  [217] = 189,
  [218] = 190,
  [219] = 191,
  [220] = 192,
  [221] = 193,
  [222] = 194,
  [223] = 195,
  [224] = 196,
  [225] = 197,
  [226] = 172,
  [227] = 171,
  [228] = 198,
  [229] = 214,
  [230] = 199,
  [231] = 231,
  [232] = 170,
  [233] = 200,
  [234] = 201,
  [235] = 202,
  [236] = 203,
  [237] = 204,
  [238] = 205,
  [239] = 206,
  [240] = 207,
  [241] = 208,
  [242] = 209,
  [243] = 210,
  [244] = 174,
  [245] = 175,
  [246] = 176,
  [247] = 177,
  [248] = 178,
  [249] = 179,
  [250] = 180,
  [251] = 181,
  [252] = 211,
  [253] = 183,
  [254] = 184,
  [255] = 231,
  [256] = 187,
  [257] = 213,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 262,
  [272] = 265,
  [273] = 264,
  [274] = 259,
  [275] = 260,
  [276] = 268,
  [277] = 266,
  [278] = 267,
  [279] = 269,
  [280] = 258,
  [281] = 261,
  [282] = 270,
  [283] = 263,
  [284] = 284,
  [285] = 284,
  [286] = 286,
  [287] = 287,
  [288] = 287,
  [289] = 289,
  [290] = 289,
  [291] = 291,
  [292] = 291,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 294,
  [297] = 295,
  [298] = 298,
  [299] = 299,
  [300] = 299,
  [301] = 301,
  [302] = 302,
  [303] = 301,
  [304] = 304,
  [305] = 302,
  [306] = 306,
  [307] = 298,
  [308] = 306,
  [309] = 309,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '.') ADVANCE(355);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == 'F') ADVANCE(101);
      if (lookahead == 'N') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'b') ADVANCE(224);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(356);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '{') ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(378);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(377);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(397);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == '}') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == 'F') ADVANCE(101);
      if (lookahead == 'N') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == 'w') ADVANCE(209);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '.') ADVANCE(355);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead == 'F') ADVANCE(101);
      if (lookahead == 'N') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'b') ADVANCE(352);
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == 'w') ADVANCE(209);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(101);
      if (lookahead == 'N') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(307);
      if (lookahead == 'f') ADVANCE(291);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 53:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '%') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(54)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(55)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 57:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 59:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(59)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(60)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 64:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(398);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(399);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(377);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_autoescape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_endautoescape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_endblock);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_blocktranslate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_endblocktranslate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_endfilter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_endfor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == 'c') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ifchanged);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_endifchanged);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_spaceless);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_endspaceless);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_endverbatim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_endwith);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == 'b') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 'v') ADVANCE(189);
      if (lookahead == 'w') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == 'v') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'v') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead == 's') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == 'r') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'p') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 'y') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'r') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 's') ADVANCE(367);
      if (lookahead == 'u') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 's') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead == 's') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'v') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'w') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'y') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'y') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == 'l') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_off);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_silent);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_only);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_random);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_by);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_openblock);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_closeblock);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_openvariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_closevariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_openbrace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_closebrace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_opencomment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_closecomment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(381);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(382);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_notin);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == ' ') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_isnot);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_None);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_forloop_DOTcounter);
      if (lookahead == '0') ADVANCE(392);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_forloop_DOTcounter0);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_forloop_DOTrevcounter);
      if (lookahead == '0') ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_forloop_DOTrevcounter0);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_forloop_DOTfirst);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_forloop_DOTlast);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_forloop_DOTparentloop);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(399);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 48},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 48},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 48},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 48},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 49},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 49},
  [55] = {.lex_state = 48},
  [56] = {.lex_state = 48},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 49},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 48},
  [62] = {.lex_state = 48},
  [63] = {.lex_state = 48},
  [64] = {.lex_state = 48},
  [65] = {.lex_state = 48},
  [66] = {.lex_state = 48},
  [67] = {.lex_state = 48},
  [68] = {.lex_state = 48},
  [69] = {.lex_state = 48},
  [70] = {.lex_state = 48},
  [71] = {.lex_state = 48},
  [72] = {.lex_state = 48},
  [73] = {.lex_state = 50},
  [74] = {.lex_state = 50},
  [75] = {.lex_state = 50},
  [76] = {.lex_state = 50},
  [77] = {.lex_state = 51},
  [78] = {.lex_state = 54},
  [79] = {.lex_state = 55},
  [80] = {.lex_state = 56},
  [81] = {.lex_state = 57},
  [82] = {.lex_state = 51},
  [83] = {.lex_state = 58},
  [84] = {.lex_state = 59},
  [85] = {.lex_state = 60},
  [86] = {.lex_state = 61},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 62},
  [89] = {.lex_state = 59},
  [90] = {.lex_state = 61},
  [91] = {.lex_state = 57},
  [92] = {.lex_state = 54},
  [93] = {.lex_state = 60},
  [94] = {.lex_state = 56},
  [95] = {.lex_state = 63},
  [96] = {.lex_state = 58},
  [97] = {.lex_state = 55},
  [98] = {.lex_state = 51},
  [99] = {.lex_state = 51},
  [100] = {.lex_state = 58},
  [101] = {.lex_state = 58},
  [102] = {.lex_state = 60},
  [103] = {.lex_state = 60},
  [104] = {.lex_state = 61},
  [105] = {.lex_state = 61},
  [106] = {.lex_state = 55},
  [107] = {.lex_state = 55},
  [108] = {.lex_state = 62},
  [109] = {.lex_state = 63},
  [110] = {.lex_state = 63},
  [111] = {.lex_state = 62},
  [112] = {.lex_state = 56},
  [113] = {.lex_state = 56},
  [114] = {.lex_state = 59},
  [115] = {.lex_state = 54},
  [116] = {.lex_state = 54},
  [117] = {.lex_state = 59},
  [118] = {.lex_state = 57},
  [119] = {.lex_state = 57},
  [120] = {.lex_state = 57},
  [121] = {.lex_state = 59},
  [122] = {.lex_state = 59},
  [123] = {.lex_state = 57},
  [124] = {.lex_state = 62},
  [125] = {.lex_state = 62},
  [126] = {.lex_state = 54},
  [127] = {.lex_state = 61},
  [128] = {.lex_state = 61},
  [129] = {.lex_state = 54},
  [130] = {.lex_state = 60},
  [131] = {.lex_state = 60},
  [132] = {.lex_state = 56},
  [133] = {.lex_state = 58},
  [134] = {.lex_state = 58},
  [135] = {.lex_state = 56},
  [136] = {.lex_state = 51},
  [137] = {.lex_state = 51},
  [138] = {.lex_state = 63},
  [139] = {.lex_state = 63},
  [140] = {.lex_state = 63},
  [141] = {.lex_state = 55},
  [142] = {.lex_state = 55},
  [143] = {.lex_state = 51},
  [144] = {.lex_state = 58},
  [145] = {.lex_state = 60},
  [146] = {.lex_state = 55},
  [147] = {.lex_state = 63},
  [148] = {.lex_state = 56},
  [149] = {.lex_state = 54},
  [150] = {.lex_state = 57},
  [151] = {.lex_state = 59},
  [152] = {.lex_state = 62},
  [153] = {.lex_state = 61},
  [154] = {.lex_state = 60},
  [155] = {.lex_state = 58},
  [156] = {.lex_state = 51},
  [157] = {.lex_state = 61},
  [158] = {.lex_state = 62},
  [159] = {.lex_state = 59},
  [160] = {.lex_state = 57},
  [161] = {.lex_state = 54},
  [162] = {.lex_state = 56},
  [163] = {.lex_state = 63},
  [164] = {.lex_state = 55},
  [165] = {.lex_state = 52},
  [166] = {.lex_state = 52},
  [167] = {.lex_state = 68},
  [168] = {.lex_state = 68},
  [169] = {.lex_state = 68},
  [170] = {.lex_state = 68},
  [171] = {.lex_state = 68},
  [172] = {.lex_state = 68},
  [173] = {.lex_state = 68},
  [174] = {.lex_state = 68},
  [175] = {.lex_state = 68},
  [176] = {.lex_state = 68},
  [177] = {.lex_state = 68},
  [178] = {.lex_state = 68},
  [179] = {.lex_state = 68},
  [180] = {.lex_state = 68},
  [181] = {.lex_state = 68},
  [182] = {.lex_state = 68},
  [183] = {.lex_state = 68},
  [184] = {.lex_state = 68},
  [185] = {.lex_state = 68},
  [186] = {.lex_state = 68},
  [187] = {.lex_state = 68},
  [188] = {.lex_state = 68},
  [189] = {.lex_state = 68},
  [190] = {.lex_state = 68},
  [191] = {.lex_state = 68},
  [192] = {.lex_state = 68},
  [193] = {.lex_state = 68},
  [194] = {.lex_state = 68},
  [195] = {.lex_state = 68},
  [196] = {.lex_state = 68},
  [197] = {.lex_state = 68},
  [198] = {.lex_state = 68},
  [199] = {.lex_state = 68},
  [200] = {.lex_state = 68},
  [201] = {.lex_state = 68},
  [202] = {.lex_state = 68},
  [203] = {.lex_state = 68},
  [204] = {.lex_state = 68},
  [205] = {.lex_state = 68},
  [206] = {.lex_state = 68},
  [207] = {.lex_state = 68},
  [208] = {.lex_state = 68},
  [209] = {.lex_state = 68},
  [210] = {.lex_state = 68},
  [211] = {.lex_state = 68},
  [212] = {.lex_state = 68},
  [213] = {.lex_state = 68},
  [214] = {.lex_state = 68},
  [215] = {.lex_state = 68},
  [216] = {.lex_state = 68},
  [217] = {.lex_state = 68},
  [218] = {.lex_state = 68},
  [219] = {.lex_state = 68},
  [220] = {.lex_state = 68},
  [221] = {.lex_state = 68},
  [222] = {.lex_state = 68},
  [223] = {.lex_state = 68},
  [224] = {.lex_state = 68},
  [225] = {.lex_state = 68},
  [226] = {.lex_state = 68},
  [227] = {.lex_state = 68},
  [228] = {.lex_state = 68},
  [229] = {.lex_state = 68},
  [230] = {.lex_state = 68},
  [231] = {.lex_state = 68},
  [232] = {.lex_state = 68},
  [233] = {.lex_state = 68},
  [234] = {.lex_state = 68},
  [235] = {.lex_state = 68},
  [236] = {.lex_state = 68},
  [237] = {.lex_state = 68},
  [238] = {.lex_state = 68},
  [239] = {.lex_state = 68},
  [240] = {.lex_state = 68},
  [241] = {.lex_state = 68},
  [242] = {.lex_state = 68},
  [243] = {.lex_state = 68},
  [244] = {.lex_state = 68},
  [245] = {.lex_state = 68},
  [246] = {.lex_state = 68},
  [247] = {.lex_state = 68},
  [248] = {.lex_state = 68},
  [249] = {.lex_state = 68},
  [250] = {.lex_state = 68},
  [251] = {.lex_state = 68},
  [252] = {.lex_state = 68},
  [253] = {.lex_state = 68},
  [254] = {.lex_state = 68},
  [255] = {.lex_state = 68},
  [256] = {.lex_state = 68},
  [257] = {.lex_state = 68},
  [258] = {.lex_state = 68},
  [259] = {.lex_state = 68},
  [260] = {.lex_state = 68},
  [261] = {.lex_state = 68},
  [262] = {.lex_state = 68},
  [263] = {.lex_state = 68},
  [264] = {.lex_state = 68},
  [265] = {.lex_state = 68},
  [266] = {.lex_state = 68},
  [267] = {.lex_state = 68},
  [268] = {.lex_state = 68},
  [269] = {.lex_state = 68},
  [270] = {.lex_state = 68},
  [271] = {.lex_state = 68},
  [272] = {.lex_state = 68},
  [273] = {.lex_state = 68},
  [274] = {.lex_state = 68},
  [275] = {.lex_state = 68},
  [276] = {.lex_state = 68},
  [277] = {.lex_state = 68},
  [278] = {.lex_state = 68},
  [279] = {.lex_state = 68},
  [280] = {.lex_state = 68},
  [281] = {.lex_state = 68},
  [282] = {.lex_state = 68},
  [283] = {.lex_state = 68},
  [284] = {.lex_state = 53},
  [285] = {.lex_state = 53},
  [286] = {.lex_state = 53},
  [287] = {.lex_state = 53},
  [288] = {.lex_state = 53},
  [289] = {.lex_state = 53},
  [290] = {.lex_state = 53},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 53},
  [294] = {.lex_state = 53},
  [295] = {.lex_state = 53},
  [296] = {.lex_state = 53},
  [297] = {.lex_state = 53},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 53},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_autoescape] = ACTIONS(1),
    [anon_sym_endautoescape] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_endblock] = ACTIONS(1),
    [anon_sym_blocktranslate] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_endcomment] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_endfilter] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_ifchanged] = ACTIONS(1),
    [anon_sym_spaceless] = ACTIONS(1),
    [anon_sym_endspaceless] = ACTIONS(1),
    [anon_sym_verbatim] = ACTIONS(1),
    [anon_sym_endverbatim] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_endwith] = ACTIONS(1),
    [sym__name] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_silent] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_random] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_openblock] = ACTIONS(1),
    [anon_sym_closeblock] = ACTIONS(1),
    [anon_sym_openvariable] = ACTIONS(1),
    [anon_sym_closevariable] = ACTIONS(1),
    [anon_sym_openbrace] = ACTIONS(1),
    [anon_sym_closebrace] = ACTIONS(1),
    [anon_sym_opencomment] = ACTIONS(1),
    [anon_sym_closecomment] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_notin] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_isnot] = ACTIONS(1),
    [anon_sym_None] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(309),
    [sym__node] = STATE(264),
    [sym_variable] = STATE(264),
    [sym_tag] = STATE(264),
    [sym_block] = STATE(264),
    [aux_sym_template_repeat1] = STATE(167),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
  },
  [2] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(13),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [3] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(37),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [4] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(39),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [5] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(41),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [6] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(3),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(43),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [7] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(45),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [8] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(47),
    [anon_sym_with] = ACTIONS(49),
    [sym__name] = ACTIONS(52),
    [aux_sym_string_token1] = ACTIONS(55),
    [aux_sym_string_token2] = ACTIONS(55),
    [sym_number] = ACTIONS(58),
    [anon_sym_True] = ACTIONS(61),
    [anon_sym_False] = ACTIONS(61),
    [anon_sym_on] = ACTIONS(49),
    [anon_sym_off] = ACTIONS(49),
    [anon_sym_silent] = ACTIONS(49),
    [anon_sym_only] = ACTIONS(49),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_random] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_by] = ACTIONS(49),
    [anon_sym_openblock] = ACTIONS(49),
    [anon_sym_closeblock] = ACTIONS(49),
    [anon_sym_openvariable] = ACTIONS(49),
    [anon_sym_closevariable] = ACTIONS(49),
    [anon_sym_openbrace] = ACTIONS(49),
    [anon_sym_closebrace] = ACTIONS(49),
    [anon_sym_opencomment] = ACTIONS(49),
    [anon_sym_closecomment] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(64),
    [anon_sym_BANG_EQ] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_LT_EQ] = ACTIONS(64),
    [anon_sym_GT_EQ] = ACTIONS(64),
    [anon_sym_and] = ACTIONS(70),
    [anon_sym_or] = ACTIONS(70),
    [anon_sym_not] = ACTIONS(70),
    [anon_sym_in] = ACTIONS(70),
    [anon_sym_notin] = ACTIONS(73),
    [anon_sym_is] = ACTIONS(70),
    [anon_sym_isnot] = ACTIONS(73),
    [anon_sym_None] = ACTIONS(76),
    [anon_sym_forloop_DOTcounter] = ACTIONS(76),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(79),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(76),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(79),
    [anon_sym_forloop_DOTfirst] = ACTIONS(79),
    [anon_sym_forloop_DOTlast] = ACTIONS(79),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(79),
  },
  [9] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(23),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(82),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [10] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(2),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(84),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [11] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(36),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(86),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [12] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(42),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(88),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [13] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(44),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(90),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [14] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(46),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(92),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [15] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(48),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(94),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [16] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(50),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(96),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [17] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(35),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(98),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [18] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(33),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(100),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [19] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(39),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(102),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [20] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(29),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(104),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [21] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(106),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [22] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(108),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [23] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(110),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [24] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(112),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [25] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(114),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [26] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(116),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [27] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(118),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [28] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(37),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(120),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [29] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(122),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [30] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(26),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(124),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [31] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(7),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(126),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [32] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(25),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(128),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [33] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(130),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [34] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(24),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(132),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [35] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(134),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [36] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(136),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [37] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(138),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [38] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(22),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(140),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [39] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(142),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [40] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(144),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [41] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(27),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(146),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [42] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(148),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [43] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(40),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(150),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [44] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(152),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [45] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(4),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(154),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [46] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(156),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [47] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(5),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(158),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [48] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(160),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [49] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(21),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(162),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
  [50] = {
    [sym_arg] = STATE(72),
    [sym_kwarg] = STATE(72),
    [sym__tag_arg] = STATE(72),
    [sym_identifier] = STATE(60),
    [sym_string] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__value] = STATE(66),
    [sym_keyword] = STATE(72),
    [sym_operator] = STATE(72),
    [sym_keyword_operator] = STATE(72),
    [sym_builtin] = STATE(60),
    [aux_sym_tag_repeat1] = STATE(8),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(164),
    [anon_sym_with] = ACTIONS(15),
    [sym__name] = ACTIONS(17),
    [aux_sym_string_token1] = ACTIONS(19),
    [aux_sym_string_token2] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [anon_sym_True] = ACTIONS(23),
    [anon_sym_False] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(15),
    [anon_sym_silent] = ACTIONS(15),
    [anon_sym_only] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_random] = ACTIONS(15),
    [anon_sym_as] = ACTIONS(15),
    [anon_sym_by] = ACTIONS(15),
    [anon_sym_openblock] = ACTIONS(15),
    [anon_sym_closeblock] = ACTIONS(15),
    [anon_sym_openvariable] = ACTIONS(15),
    [anon_sym_closevariable] = ACTIONS(15),
    [anon_sym_openbrace] = ACTIONS(15),
    [anon_sym_closebrace] = ACTIONS(15),
    [anon_sym_opencomment] = ACTIONS(15),
    [anon_sym_closecomment] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(29),
    [anon_sym_notin] = ACTIONS(31),
    [anon_sym_is] = ACTIONS(29),
    [anon_sym_isnot] = ACTIONS(31),
    [anon_sym_None] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTrevcounter] = ACTIONS(33),
    [anon_sym_forloop_DOTrevcounter0] = ACTIONS(35),
    [anon_sym_forloop_DOTfirst] = ACTIONS(35),
    [anon_sym_forloop_DOTlast] = ACTIONS(35),
    [anon_sym_forloop_DOTparentloop] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(170), 1,
      anon_sym_DOT,
    STATE(51), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(166), 16,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(168), 31,
      anon_sym_with,
      sym__name,
      sym_number,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [58] = 4,
    ACTIONS(177), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(173), 16,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(175), 31,
      anon_sym_with,
      sym__name,
      sym_number,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [116] = 4,
    ACTIONS(177), 1,
      anon_sym_DOT,
    STATE(51), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(179), 16,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(181), 31,
      anon_sym_with,
      sym__name,
      sym_number,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [174] = 5,
    ACTIONS(177), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_EQ,
    STATE(53), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(173), 15,
      anon_sym_PIPE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(175), 31,
      anon_sym_with,
      sym__name,
      sym_number,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [234] = 4,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    STATE(57), 1,
      aux_sym_filters_repeat1,
    ACTIONS(187), 16,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(189), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [291] = 4,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_filters_repeat1,
    ACTIONS(194), 16,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(196), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [348] = 4,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_filters_repeat1,
    ACTIONS(198), 16,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(200), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [405] = 3,
    ACTIONS(202), 1,
      anon_sym_COLON,
    ACTIONS(204), 17,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(206), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [460] = 2,
    ACTIONS(166), 16,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(168), 32,
      anon_sym_with,
      sym__name,
      anon_sym_DOT,
      sym_number,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [513] = 2,
    ACTIONS(208), 17,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(210), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [565] = 2,
    ACTIONS(212), 17,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(214), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [617] = 2,
    ACTIONS(216), 17,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(218), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [669] = 2,
    ACTIONS(220), 17,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(222), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [721] = 2,
    ACTIONS(224), 17,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(226), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [773] = 2,
    ACTIONS(194), 17,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(196), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [825] = 3,
    ACTIONS(228), 1,
      anon_sym_PIPE,
    ACTIONS(230), 15,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(232), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [878] = 2,
    ACTIONS(234), 15,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(236), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [928] = 2,
    ACTIONS(238), 15,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(240), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [978] = 2,
    ACTIONS(242), 15,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(244), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [1028] = 2,
    ACTIONS(246), 15,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(248), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [1078] = 2,
    ACTIONS(250), 15,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(252), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [1128] = 2,
    ACTIONS(254), 15,
      anon_sym_PERCENT_RBRACE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_number,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
    ACTIONS(256), 30,
      anon_sym_with,
      sym__name,
      anon_sym_True,
      anon_sym_False,
      anon_sym_on,
      anon_sym_off,
      anon_sym_silent,
      anon_sym_only,
      anon_sym_from,
      anon_sym_random,
      anon_sym_as,
      anon_sym_by,
      anon_sym_openblock,
      anon_sym_closeblock,
      anon_sym_openvariable,
      anon_sym_closevariable,
      anon_sym_openbrace,
      anon_sym_closebrace,
      anon_sym_opencomment,
      anon_sym_closecomment,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      anon_sym_in,
      anon_sym_is,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
  [1178] = 9,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(258), 1,
      sym__name,
    STATE(66), 1,
      sym__value,
    STATE(71), 1,
      sym_arg,
    ACTIONS(19), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 3,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
    STATE(60), 4,
      sym_identifier,
      sym_string,
      sym_boolean,
      sym_builtin,
    ACTIONS(35), 5,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
  [1217] = 8,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(258), 1,
      sym__name,
    STATE(291), 1,
      sym__value,
    ACTIONS(19), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 3,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
    STATE(60), 4,
      sym_identifier,
      sym_string,
      sym_boolean,
      sym_builtin,
    ACTIONS(35), 5,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
  [1253] = 8,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(258), 1,
      sym__name,
    STATE(292), 1,
      sym__value,
    ACTIONS(19), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 3,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
    STATE(60), 4,
      sym_identifier,
      sym_string,
      sym_boolean,
      sym_builtin,
    ACTIONS(35), 5,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
  [1289] = 8,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(258), 1,
      sym__name,
    STATE(63), 1,
      sym__value,
    ACTIONS(19), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(33), 3,
      anon_sym_None,
      anon_sym_forloop_DOTcounter,
      anon_sym_forloop_DOTrevcounter,
    STATE(60), 4,
      sym_identifier,
      sym_string,
      sym_boolean,
      sym_builtin,
    ACTIONS(35), 5,
      anon_sym_forloop_DOTcounter0,
      anon_sym_forloop_DOTrevcounter0,
      anon_sym_forloop_DOTfirst,
      anon_sym_forloop_DOTlast,
      anon_sym_forloop_DOTparentloop,
  [1325] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(282), 1,
      anon_sym_endwith,
    ACTIONS(284), 1,
      sym__name,
  [1365] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(286), 1,
      anon_sym_endcomment,
  [1405] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(286), 1,
      anon_sym_endautoescape,
  [1445] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(286), 1,
      anon_sym_endblocktranslate,
  [1485] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(286), 1,
      anon_sym_endfilter,
  [1525] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(288), 1,
      anon_sym_endwith,
  [1565] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(288), 1,
      anon_sym_endverbatim,
  [1605] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(286), 1,
      anon_sym_endfor,
  [1645] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(288), 1,
      anon_sym_endspaceless,
  [1685] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(288), 1,
      anon_sym_endifchanged,
  [1725] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(286), 1,
      anon_sym_endif,
  [1765] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(288), 1,
      anon_sym_endif,
  [1805] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(288), 1,
      anon_sym_endfor,
  [1845] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(286), 1,
      anon_sym_endifchanged,
  [1885] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(288), 1,
      anon_sym_endfilter,
  [1925] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(288), 1,
      anon_sym_endcomment,
  [1965] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(286), 1,
      anon_sym_endspaceless,
  [2005] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(288), 1,
      anon_sym_endblocktranslate,
  [2045] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(288), 1,
      anon_sym_endblock,
  [2085] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(286), 1,
      anon_sym_endverbatim,
  [2125] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(288), 1,
      anon_sym_endautoescape,
  [2165] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(290), 1,
      anon_sym_endwith,
  [2205] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(286), 1,
      anon_sym_endwith,
  [2245] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(290), 1,
      anon_sym_endverbatim,
  [2285] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(282), 1,
      anon_sym_endverbatim,
    ACTIONS(284), 1,
      sym__name,
  [2325] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(290), 1,
      anon_sym_endspaceless,
  [2365] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(282), 1,
      anon_sym_endspaceless,
    ACTIONS(284), 1,
      sym__name,
  [2405] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(290), 1,
      anon_sym_endifchanged,
  [2445] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(282), 1,
      anon_sym_endifchanged,
    ACTIONS(284), 1,
      sym__name,
  [2485] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(292), 1,
      anon_sym_endautoescape,
  [2525] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(294), 1,
      anon_sym_endautoescape,
  [2565] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(290), 1,
      anon_sym_endif,
  [2605] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(292), 1,
      anon_sym_endblock,
  [2645] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(294), 1,
      anon_sym_endblock,
  [2685] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(282), 1,
      anon_sym_endif,
    ACTIONS(284), 1,
      sym__name,
  [2725] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(292), 1,
      anon_sym_endblocktranslate,
  [2765] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(294), 1,
      anon_sym_endblocktranslate,
  [2805] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(290), 1,
      anon_sym_endfor,
  [2845] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(292), 1,
      anon_sym_endcomment,
  [2885] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(294), 1,
      anon_sym_endcomment,
  [2925] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(282), 1,
      anon_sym_endfor,
    ACTIONS(284), 1,
      sym__name,
  [2965] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(292), 1,
      anon_sym_endfilter,
  [3005] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(294), 1,
      anon_sym_endfilter,
  [3045] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(290), 1,
      anon_sym_endfilter,
  [3085] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(292), 1,
      anon_sym_endfor,
  [3125] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(294), 1,
      anon_sym_endfor,
  [3165] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(282), 1,
      anon_sym_endfilter,
    ACTIONS(284), 1,
      sym__name,
  [3205] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(292), 1,
      anon_sym_endif,
  [3245] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(294), 1,
      anon_sym_endif,
  [3285] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(290), 1,
      anon_sym_endcomment,
  [3325] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(292), 1,
      anon_sym_endifchanged,
  [3365] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(294), 1,
      anon_sym_endifchanged,
  [3405] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(282), 1,
      anon_sym_endcomment,
    ACTIONS(284), 1,
      sym__name,
  [3445] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(292), 1,
      anon_sym_endspaceless,
  [3485] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(294), 1,
      anon_sym_endspaceless,
  [3525] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(290), 1,
      anon_sym_endblocktranslate,
  [3565] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(292), 1,
      anon_sym_endverbatim,
  [3605] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(294), 1,
      anon_sym_endverbatim,
  [3645] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(282), 1,
      anon_sym_endblocktranslate,
    ACTIONS(284), 1,
      sym__name,
  [3685] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(292), 1,
      anon_sym_endwith,
  [3725] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(294), 1,
      anon_sym_endwith,
  [3765] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(290), 1,
      anon_sym_endblock,
  [3805] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(286), 1,
      anon_sym_endblock,
  [3845] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(282), 1,
      anon_sym_endblock,
    ACTIONS(284), 1,
      sym__name,
  [3885] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(290), 1,
      anon_sym_endautoescape,
  [3925] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(282), 1,
      anon_sym_endautoescape,
    ACTIONS(284), 1,
      sym__name,
  [3965] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(296), 1,
      anon_sym_endwith,
  [4005] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(296), 1,
      anon_sym_endverbatim,
  [4045] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(296), 1,
      anon_sym_endspaceless,
  [4085] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(298), 1,
      anon_sym_endautoescape,
  [4125] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(298), 1,
      anon_sym_endblock,
  [4165] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(298), 1,
      anon_sym_endblocktranslate,
  [4205] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(298), 1,
      anon_sym_endcomment,
  [4245] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(298), 1,
      anon_sym_endfilter,
  [4285] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(298), 1,
      anon_sym_endfor,
  [4325] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(298), 1,
      anon_sym_endif,
  [4365] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(298), 1,
      anon_sym_endifchanged,
  [4405] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(298), 1,
      anon_sym_endspaceless,
  [4445] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(298), 1,
      anon_sym_endverbatim,
  [4485] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(298), 1,
      anon_sym_endwith,
  [4525] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(296), 1,
      anon_sym_endifchanged,
  [4565] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(296), 1,
      anon_sym_endif,
  [4605] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(296), 1,
      anon_sym_endfor,
  [4645] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(296), 1,
      anon_sym_endfilter,
  [4685] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(296), 1,
      anon_sym_endcomment,
  [4725] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(296), 1,
      anon_sym_endblocktranslate,
  [4765] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(296), 1,
      anon_sym_endblock,
  [4805] = 13,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
    ACTIONS(296), 1,
      anon_sym_endautoescape,
  [4845] = 12,
    ACTIONS(300), 1,
      anon_sym_autoescape,
    ACTIONS(302), 1,
      anon_sym_block,
    ACTIONS(304), 1,
      anon_sym_blocktranslate,
    ACTIONS(306), 1,
      anon_sym_comment,
    ACTIONS(308), 1,
      anon_sym_filter,
    ACTIONS(310), 1,
      anon_sym_for,
    ACTIONS(312), 1,
      anon_sym_if,
    ACTIONS(314), 1,
      anon_sym_ifchanged,
    ACTIONS(316), 1,
      anon_sym_spaceless,
    ACTIONS(318), 1,
      anon_sym_verbatim,
    ACTIONS(320), 1,
      anon_sym_with,
    ACTIONS(322), 1,
      sym__name,
  [4882] = 12,
    ACTIONS(260), 1,
      anon_sym_autoescape,
    ACTIONS(262), 1,
      anon_sym_block,
    ACTIONS(264), 1,
      anon_sym_blocktranslate,
    ACTIONS(266), 1,
      anon_sym_comment,
    ACTIONS(268), 1,
      anon_sym_filter,
    ACTIONS(270), 1,
      anon_sym_for,
    ACTIONS(272), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_ifchanged,
    ACTIONS(276), 1,
      anon_sym_spaceless,
    ACTIONS(278), 1,
      anon_sym_verbatim,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(284), 1,
      sym__name,
  [4919] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    STATE(168), 1,
      aux_sym_template_repeat1,
    STATE(264), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [4944] = 7,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(337), 1,
      sym_text,
    STATE(168), 1,
      aux_sym_template_repeat1,
    STATE(264), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [4969] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(346), 1,
      sym_text,
    STATE(203), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [4991] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(348), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5013] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(350), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(223), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5035] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(352), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5057] = 6,
    ACTIONS(354), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(357), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(363), 1,
      sym_text,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5079] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(366), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(231), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5101] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(368), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(213), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5123] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(370), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(198), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5145] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(372), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(172), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5167] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(374), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(252), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5189] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(376), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(242), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5211] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(378), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(240), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5233] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(380), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(238), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5255] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(382), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(236), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5277] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(384), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(234), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5299] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(386), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(232), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5321] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(388), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(222), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5343] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(390), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5365] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(392), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(225), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5387] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(394), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5409] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(396), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5431] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(398), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5453] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(400), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5475] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(402), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5497] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(404), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5519] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(406), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5541] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(408), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5563] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(410), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5585] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(412), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5607] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(414), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5629] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(416), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(186), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5651] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(418), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(188), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5673] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(420), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5695] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(422), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(189), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5717] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(424), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5739] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(426), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(190), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5761] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(428), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5783] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(430), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(191), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5805] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(432), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5827] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(434), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(192), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5849] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(436), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5871] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(438), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(193), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5893] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(440), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5915] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(442), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(194), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5937] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(444), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5959] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(446), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(224), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [5981] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(448), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6003] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(450), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6025] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(452), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6047] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(454), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6069] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(456), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6091] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(458), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6113] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(460), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6135] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(462), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6157] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(464), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6179] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(466), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6201] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(468), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6223] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(470), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6245] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(472), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(195), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6267] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(474), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6289] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(476), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(196), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6311] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(478), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(215), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6333] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(480), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6355] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(482), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6377] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(484), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(216), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6399] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(486), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6421] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(488), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(217), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6443] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(490), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6465] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(492), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(218), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6487] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(494), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6509] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(496), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(219), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6531] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(498), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6553] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(500), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(220), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6575] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(502), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6597] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(504), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(221), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6619] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(506), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(255), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6641] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(508), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(257), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6663] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(510), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(228), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6685] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(512), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(226), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6707] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(514), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(211), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6729] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(516), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(209), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6751] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(518), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(207), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6773] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(520), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(205), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6795] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(522), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6817] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(524), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(201), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6839] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(526), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(170), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6861] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(528), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6883] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(530), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(197), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6905] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_text,
    ACTIONS(532), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(173), 1,
      aux_sym_template_repeat1,
    STATE(273), 4,
      sym__node,
      sym_variable,
      sym_tag,
      sym_block,
  [6927] = 2,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(536), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [6937] = 2,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(540), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [6947] = 2,
    ACTIONS(542), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(544), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [6957] = 2,
    ACTIONS(546), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(548), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [6967] = 2,
    ACTIONS(550), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(552), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [6977] = 2,
    ACTIONS(554), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(556), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [6987] = 2,
    ACTIONS(558), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(560), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [6997] = 2,
    ACTIONS(562), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(564), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7007] = 2,
    ACTIONS(566), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(568), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7017] = 2,
    ACTIONS(570), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(572), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7027] = 2,
    ACTIONS(574), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(576), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7037] = 2,
    ACTIONS(578), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(580), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7047] = 2,
    ACTIONS(582), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(584), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7057] = 2,
    ACTIONS(550), 1,
      sym_text,
    ACTIONS(552), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7066] = 2,
    ACTIONS(562), 1,
      sym_text,
    ACTIONS(564), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7075] = 2,
    ACTIONS(558), 1,
      sym_text,
    ACTIONS(560), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7084] = 2,
    ACTIONS(538), 1,
      sym_text,
    ACTIONS(540), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7093] = 2,
    ACTIONS(542), 1,
      sym_text,
    ACTIONS(544), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7102] = 2,
    ACTIONS(574), 1,
      sym_text,
    ACTIONS(576), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7111] = 2,
    ACTIONS(566), 1,
      sym_text,
    ACTIONS(568), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7120] = 2,
    ACTIONS(570), 1,
      sym_text,
    ACTIONS(572), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7129] = 2,
    ACTIONS(578), 1,
      sym_text,
    ACTIONS(580), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7138] = 2,
    ACTIONS(534), 1,
      sym_text,
    ACTIONS(536), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7147] = 2,
    ACTIONS(546), 1,
      sym_text,
    ACTIONS(548), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7156] = 2,
    ACTIONS(582), 1,
      sym_text,
    ACTIONS(584), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7165] = 2,
    ACTIONS(554), 1,
      sym_text,
    ACTIONS(556), 3,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
      anon_sym_LBRACE_PERCENT,
  [7174] = 3,
    ACTIONS(586), 1,
      sym__name,
    STATE(55), 1,
      sym_filter,
    STATE(308), 1,
      sym_filters,
  [7184] = 3,
    ACTIONS(586), 1,
      sym__name,
    STATE(55), 1,
      sym_filter,
    STATE(306), 1,
      sym_filters,
  [7194] = 3,
    ACTIONS(586), 1,
      sym__name,
    STATE(55), 1,
      sym_filter,
    STATE(67), 1,
      sym_filters,
  [7204] = 2,
    ACTIONS(588), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(590), 1,
      sym__name,
  [7211] = 2,
    ACTIONS(592), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(594), 1,
      sym__name,
  [7218] = 2,
    ACTIONS(596), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(598), 1,
      sym__name,
  [7225] = 2,
    ACTIONS(600), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(602), 1,
      sym__name,
  [7232] = 2,
    ACTIONS(604), 1,
      anon_sym_PIPE,
    ACTIONS(606), 1,
      anon_sym_RBRACE_RBRACE,
  [7239] = 2,
    ACTIONS(608), 1,
      anon_sym_PIPE,
    ACTIONS(610), 1,
      anon_sym_RBRACE_RBRACE,
  [7246] = 2,
    ACTIONS(586), 1,
      sym__name,
    STATE(65), 1,
      sym_filter,
  [7253] = 2,
    ACTIONS(612), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(614), 1,
      sym__name,
  [7260] = 2,
    ACTIONS(616), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(618), 1,
      sym__name,
  [7267] = 2,
    ACTIONS(620), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(622), 1,
      sym__name,
  [7274] = 2,
    ACTIONS(624), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(626), 1,
      sym__name,
  [7281] = 1,
    ACTIONS(628), 1,
      anon_sym_PERCENT_RBRACE,
  [7285] = 1,
    ACTIONS(630), 1,
      anon_sym_PERCENT_RBRACE,
  [7289] = 1,
    ACTIONS(632), 1,
      anon_sym_PERCENT_RBRACE,
  [7293] = 1,
    ACTIONS(634), 1,
      anon_sym_PERCENT_RBRACE,
  [7297] = 1,
    ACTIONS(636), 1,
      anon_sym_PERCENT_RBRACE,
  [7301] = 1,
    ACTIONS(638), 1,
      anon_sym_PERCENT_RBRACE,
  [7305] = 1,
    ACTIONS(640), 1,
      sym__name,
  [7309] = 1,
    ACTIONS(642), 1,
      anon_sym_PERCENT_RBRACE,
  [7313] = 1,
    ACTIONS(644), 1,
      anon_sym_RBRACE_RBRACE,
  [7317] = 1,
    ACTIONS(646), 1,
      anon_sym_PERCENT_RBRACE,
  [7321] = 1,
    ACTIONS(648), 1,
      anon_sym_RBRACE_RBRACE,
  [7325] = 1,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(51)] = 0,
  [SMALL_STATE(52)] = 58,
  [SMALL_STATE(53)] = 116,
  [SMALL_STATE(54)] = 174,
  [SMALL_STATE(55)] = 234,
  [SMALL_STATE(56)] = 291,
  [SMALL_STATE(57)] = 348,
  [SMALL_STATE(58)] = 405,
  [SMALL_STATE(59)] = 460,
  [SMALL_STATE(60)] = 513,
  [SMALL_STATE(61)] = 565,
  [SMALL_STATE(62)] = 617,
  [SMALL_STATE(63)] = 669,
  [SMALL_STATE(64)] = 721,
  [SMALL_STATE(65)] = 773,
  [SMALL_STATE(66)] = 825,
  [SMALL_STATE(67)] = 878,
  [SMALL_STATE(68)] = 928,
  [SMALL_STATE(69)] = 978,
  [SMALL_STATE(70)] = 1028,
  [SMALL_STATE(71)] = 1078,
  [SMALL_STATE(72)] = 1128,
  [SMALL_STATE(73)] = 1178,
  [SMALL_STATE(74)] = 1217,
  [SMALL_STATE(75)] = 1253,
  [SMALL_STATE(76)] = 1289,
  [SMALL_STATE(77)] = 1325,
  [SMALL_STATE(78)] = 1365,
  [SMALL_STATE(79)] = 1405,
  [SMALL_STATE(80)] = 1445,
  [SMALL_STATE(81)] = 1485,
  [SMALL_STATE(82)] = 1525,
  [SMALL_STATE(83)] = 1565,
  [SMALL_STATE(84)] = 1605,
  [SMALL_STATE(85)] = 1645,
  [SMALL_STATE(86)] = 1685,
  [SMALL_STATE(87)] = 1725,
  [SMALL_STATE(88)] = 1765,
  [SMALL_STATE(89)] = 1805,
  [SMALL_STATE(90)] = 1845,
  [SMALL_STATE(91)] = 1885,
  [SMALL_STATE(92)] = 1925,
  [SMALL_STATE(93)] = 1965,
  [SMALL_STATE(94)] = 2005,
  [SMALL_STATE(95)] = 2045,
  [SMALL_STATE(96)] = 2085,
  [SMALL_STATE(97)] = 2125,
  [SMALL_STATE(98)] = 2165,
  [SMALL_STATE(99)] = 2205,
  [SMALL_STATE(100)] = 2245,
  [SMALL_STATE(101)] = 2285,
  [SMALL_STATE(102)] = 2325,
  [SMALL_STATE(103)] = 2365,
  [SMALL_STATE(104)] = 2405,
  [SMALL_STATE(105)] = 2445,
  [SMALL_STATE(106)] = 2485,
  [SMALL_STATE(107)] = 2525,
  [SMALL_STATE(108)] = 2565,
  [SMALL_STATE(109)] = 2605,
  [SMALL_STATE(110)] = 2645,
  [SMALL_STATE(111)] = 2685,
  [SMALL_STATE(112)] = 2725,
  [SMALL_STATE(113)] = 2765,
  [SMALL_STATE(114)] = 2805,
  [SMALL_STATE(115)] = 2845,
  [SMALL_STATE(116)] = 2885,
  [SMALL_STATE(117)] = 2925,
  [SMALL_STATE(118)] = 2965,
  [SMALL_STATE(119)] = 3005,
  [SMALL_STATE(120)] = 3045,
  [SMALL_STATE(121)] = 3085,
  [SMALL_STATE(122)] = 3125,
  [SMALL_STATE(123)] = 3165,
  [SMALL_STATE(124)] = 3205,
  [SMALL_STATE(125)] = 3245,
  [SMALL_STATE(126)] = 3285,
  [SMALL_STATE(127)] = 3325,
  [SMALL_STATE(128)] = 3365,
  [SMALL_STATE(129)] = 3405,
  [SMALL_STATE(130)] = 3445,
  [SMALL_STATE(131)] = 3485,
  [SMALL_STATE(132)] = 3525,
  [SMALL_STATE(133)] = 3565,
  [SMALL_STATE(134)] = 3605,
  [SMALL_STATE(135)] = 3645,
  [SMALL_STATE(136)] = 3685,
  [SMALL_STATE(137)] = 3725,
  [SMALL_STATE(138)] = 3765,
  [SMALL_STATE(139)] = 3805,
  [SMALL_STATE(140)] = 3845,
  [SMALL_STATE(141)] = 3885,
  [SMALL_STATE(142)] = 3925,
  [SMALL_STATE(143)] = 3965,
  [SMALL_STATE(144)] = 4005,
  [SMALL_STATE(145)] = 4045,
  [SMALL_STATE(146)] = 4085,
  [SMALL_STATE(147)] = 4125,
  [SMALL_STATE(148)] = 4165,
  [SMALL_STATE(149)] = 4205,
  [SMALL_STATE(150)] = 4245,
  [SMALL_STATE(151)] = 4285,
  [SMALL_STATE(152)] = 4325,
  [SMALL_STATE(153)] = 4365,
  [SMALL_STATE(154)] = 4405,
  [SMALL_STATE(155)] = 4445,
  [SMALL_STATE(156)] = 4485,
  [SMALL_STATE(157)] = 4525,
  [SMALL_STATE(158)] = 4565,
  [SMALL_STATE(159)] = 4605,
  [SMALL_STATE(160)] = 4645,
  [SMALL_STATE(161)] = 4685,
  [SMALL_STATE(162)] = 4725,
  [SMALL_STATE(163)] = 4765,
  [SMALL_STATE(164)] = 4805,
  [SMALL_STATE(165)] = 4845,
  [SMALL_STATE(166)] = 4882,
  [SMALL_STATE(167)] = 4919,
  [SMALL_STATE(168)] = 4944,
  [SMALL_STATE(169)] = 4969,
  [SMALL_STATE(170)] = 4991,
  [SMALL_STATE(171)] = 5013,
  [SMALL_STATE(172)] = 5035,
  [SMALL_STATE(173)] = 5057,
  [SMALL_STATE(174)] = 5079,
  [SMALL_STATE(175)] = 5101,
  [SMALL_STATE(176)] = 5123,
  [SMALL_STATE(177)] = 5145,
  [SMALL_STATE(178)] = 5167,
  [SMALL_STATE(179)] = 5189,
  [SMALL_STATE(180)] = 5211,
  [SMALL_STATE(181)] = 5233,
  [SMALL_STATE(182)] = 5255,
  [SMALL_STATE(183)] = 5277,
  [SMALL_STATE(184)] = 5299,
  [SMALL_STATE(185)] = 5321,
  [SMALL_STATE(186)] = 5343,
  [SMALL_STATE(187)] = 5365,
  [SMALL_STATE(188)] = 5387,
  [SMALL_STATE(189)] = 5409,
  [SMALL_STATE(190)] = 5431,
  [SMALL_STATE(191)] = 5453,
  [SMALL_STATE(192)] = 5475,
  [SMALL_STATE(193)] = 5497,
  [SMALL_STATE(194)] = 5519,
  [SMALL_STATE(195)] = 5541,
  [SMALL_STATE(196)] = 5563,
  [SMALL_STATE(197)] = 5585,
  [SMALL_STATE(198)] = 5607,
  [SMALL_STATE(199)] = 5629,
  [SMALL_STATE(200)] = 5651,
  [SMALL_STATE(201)] = 5673,
  [SMALL_STATE(202)] = 5695,
  [SMALL_STATE(203)] = 5717,
  [SMALL_STATE(204)] = 5739,
  [SMALL_STATE(205)] = 5761,
  [SMALL_STATE(206)] = 5783,
  [SMALL_STATE(207)] = 5805,
  [SMALL_STATE(208)] = 5827,
  [SMALL_STATE(209)] = 5849,
  [SMALL_STATE(210)] = 5871,
  [SMALL_STATE(211)] = 5893,
  [SMALL_STATE(212)] = 5915,
  [SMALL_STATE(213)] = 5937,
  [SMALL_STATE(214)] = 5959,
  [SMALL_STATE(215)] = 5981,
  [SMALL_STATE(216)] = 6003,
  [SMALL_STATE(217)] = 6025,
  [SMALL_STATE(218)] = 6047,
  [SMALL_STATE(219)] = 6069,
  [SMALL_STATE(220)] = 6091,
  [SMALL_STATE(221)] = 6113,
  [SMALL_STATE(222)] = 6135,
  [SMALL_STATE(223)] = 6157,
  [SMALL_STATE(224)] = 6179,
  [SMALL_STATE(225)] = 6201,
  [SMALL_STATE(226)] = 6223,
  [SMALL_STATE(227)] = 6245,
  [SMALL_STATE(228)] = 6267,
  [SMALL_STATE(229)] = 6289,
  [SMALL_STATE(230)] = 6311,
  [SMALL_STATE(231)] = 6333,
  [SMALL_STATE(232)] = 6355,
  [SMALL_STATE(233)] = 6377,
  [SMALL_STATE(234)] = 6399,
  [SMALL_STATE(235)] = 6421,
  [SMALL_STATE(236)] = 6443,
  [SMALL_STATE(237)] = 6465,
  [SMALL_STATE(238)] = 6487,
  [SMALL_STATE(239)] = 6509,
  [SMALL_STATE(240)] = 6531,
  [SMALL_STATE(241)] = 6553,
  [SMALL_STATE(242)] = 6575,
  [SMALL_STATE(243)] = 6597,
  [SMALL_STATE(244)] = 6619,
  [SMALL_STATE(245)] = 6641,
  [SMALL_STATE(246)] = 6663,
  [SMALL_STATE(247)] = 6685,
  [SMALL_STATE(248)] = 6707,
  [SMALL_STATE(249)] = 6729,
  [SMALL_STATE(250)] = 6751,
  [SMALL_STATE(251)] = 6773,
  [SMALL_STATE(252)] = 6795,
  [SMALL_STATE(253)] = 6817,
  [SMALL_STATE(254)] = 6839,
  [SMALL_STATE(255)] = 6861,
  [SMALL_STATE(256)] = 6883,
  [SMALL_STATE(257)] = 6905,
  [SMALL_STATE(258)] = 6927,
  [SMALL_STATE(259)] = 6937,
  [SMALL_STATE(260)] = 6947,
  [SMALL_STATE(261)] = 6957,
  [SMALL_STATE(262)] = 6967,
  [SMALL_STATE(263)] = 6977,
  [SMALL_STATE(264)] = 6987,
  [SMALL_STATE(265)] = 6997,
  [SMALL_STATE(266)] = 7007,
  [SMALL_STATE(267)] = 7017,
  [SMALL_STATE(268)] = 7027,
  [SMALL_STATE(269)] = 7037,
  [SMALL_STATE(270)] = 7047,
  [SMALL_STATE(271)] = 7057,
  [SMALL_STATE(272)] = 7066,
  [SMALL_STATE(273)] = 7075,
  [SMALL_STATE(274)] = 7084,
  [SMALL_STATE(275)] = 7093,
  [SMALL_STATE(276)] = 7102,
  [SMALL_STATE(277)] = 7111,
  [SMALL_STATE(278)] = 7120,
  [SMALL_STATE(279)] = 7129,
  [SMALL_STATE(280)] = 7138,
  [SMALL_STATE(281)] = 7147,
  [SMALL_STATE(282)] = 7156,
  [SMALL_STATE(283)] = 7165,
  [SMALL_STATE(284)] = 7174,
  [SMALL_STATE(285)] = 7184,
  [SMALL_STATE(286)] = 7194,
  [SMALL_STATE(287)] = 7204,
  [SMALL_STATE(288)] = 7211,
  [SMALL_STATE(289)] = 7218,
  [SMALL_STATE(290)] = 7225,
  [SMALL_STATE(291)] = 7232,
  [SMALL_STATE(292)] = 7239,
  [SMALL_STATE(293)] = 7246,
  [SMALL_STATE(294)] = 7253,
  [SMALL_STATE(295)] = 7260,
  [SMALL_STATE(296)] = 7267,
  [SMALL_STATE(297)] = 7274,
  [SMALL_STATE(298)] = 7281,
  [SMALL_STATE(299)] = 7285,
  [SMALL_STATE(300)] = 7289,
  [SMALL_STATE(301)] = 7293,
  [SMALL_STATE(302)] = 7297,
  [SMALL_STATE(303)] = 7301,
  [SMALL_STATE(304)] = 7305,
  [SMALL_STATE(305)] = 7309,
  [SMALL_STATE(306)] = 7313,
  [SMALL_STATE(307)] = 7317,
  [SMALL_STATE(308)] = 7321,
  [SMALL_STATE(309)] = 7325,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(68),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(54),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(64),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(60),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(61),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(69),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(69),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(70),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(70),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(62),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(62),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(304),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filters, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filters, 1),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filters_repeat1, 2), SHIFT_REPEAT(293),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filters_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filters_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filters, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filters, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, .production_id = 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1, .production_id = 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3, .production_id = 6),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3, .production_id = 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_operator, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_operator, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kwarg, 3, .production_id = 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(74),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(264),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(165),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(264),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(75),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(273),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(166),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(273),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8, .production_id = 8),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 8, .production_id = 8),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, .production_id = 4),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, .production_id = 4),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 1),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 9, .production_id = 10),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 9, .production_id = 10),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 2),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8, .production_id = 10),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 8, .production_id = 10),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7, .production_id = 7),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7, .production_id = 7),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7, .production_id = 8),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7, .production_id = 8),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, .production_id = 7),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 6, .production_id = 7),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7, .production_id = 9),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7, .production_id = 9),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8, .production_id = 9),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 8, .production_id = 9),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [650] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_djangotemplate(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
