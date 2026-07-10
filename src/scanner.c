#include "tree_sitter/parser.h"

#include <stdbool.h>
#include <stddef.h>
#include <wctype.h>

enum TokenType {
  COMMENT_BLOCK_TEXT,
  VERBATIM_BLOCK_TEXT,
  INLINE_COMMENT,
};

static void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static bool scan_word(TSLexer *lexer, const char *word) {
  for (const char *cursor = word; *cursor; cursor++) {
    if (lexer->lookahead != *cursor) {
      return false;
    }
    advance(lexer);
  }
  return true;
}

static void scan_whitespace(TSLexer *lexer) {
  while (iswspace(lexer->lookahead)) {
    advance(lexer);
  }
}

static bool scan_end_tag(TSLexer *lexer, const char *tag_name) {
  if (lexer->lookahead != '{') {
    return false;
  }
  advance(lexer);

  if (lexer->lookahead != '%') {
    return false;
  }
  advance(lexer);

  scan_whitespace(lexer);

  if (!scan_word(lexer, tag_name)) {
    return false;
  }

  scan_whitespace(lexer);

  if (lexer->lookahead != '%') {
    return false;
  }
  advance(lexer);

  if (lexer->lookahead != '}') {
    return false;
  }
  advance(lexer);

  return true;
}

static bool scan_block_text(TSLexer *lexer, const char *end_tag, enum TokenType token_type) {
  bool has_content = false;

  for (;;) {
    if (lexer->eof(lexer)) {
      lexer->result_symbol = token_type;
      return has_content;
    }

    if (lexer->lookahead == '{') {
      lexer->mark_end(lexer);
      if (scan_end_tag(lexer, end_tag)) {
        if (!has_content) {
          return false;
        }
        lexer->result_symbol = token_type;
        return true;
      }
      lexer->mark_end(lexer);
    } else {
      advance(lexer);
      lexer->mark_end(lexer);
    }

    has_content = true;
  }
}

static bool scan_inline_comment(TSLexer *lexer) {
  if (lexer->lookahead != '{') {
    return false;
  }
  advance(lexer);

  if (lexer->lookahead != '#') {
    return false;
  }
  advance(lexer);

  for (;;) {
    if (lexer->lookahead == '#') {
      advance(lexer);

      if (lexer->lookahead == '}') {
        advance(lexer);
        lexer->mark_end(lexer);
        lexer->result_symbol = INLINE_COMMENT;
        return true;
      }
    } else {
      if (lexer->eof(lexer)) {
        return false;
      }
      advance(lexer);
    }
  }
}

void *tree_sitter_djangotemplate_external_scanner_create() {
  return NULL;
}

void tree_sitter_djangotemplate_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_djangotemplate_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}

void tree_sitter_djangotemplate_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {}

bool tree_sitter_djangotemplate_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (valid_symbols[COMMENT_BLOCK_TEXT]) {
    return scan_block_text(lexer, "endcomment", COMMENT_BLOCK_TEXT);
  }

  if (valid_symbols[VERBATIM_BLOCK_TEXT]) {
    return scan_block_text(lexer, "endverbatim", VERBATIM_BLOCK_TEXT);
  }

  if (valid_symbols[INLINE_COMMENT]) {
    return scan_inline_comment(lexer);
  }

  return false;
}
