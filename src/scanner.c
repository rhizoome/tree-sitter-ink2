#include "tree_sitter/parser.h"
#include <stdio.h>

/* Notes
- There is no need to lex single characters. Only multi-character symbols and
  position dependent symbols need to be lexed by the scanner.
- We never skip with lexer->advance(lexer, true); because it improves the
  readablity of debug output of "tree-sitter parse"
*/

/* Goals
- Add special symbols to avoid conflicting grammer (GLR)
- Try to keep all unicode "magic" in grammer.js
- Except of course whitespaces handling, since you can't build this scanner without
    - See is_unicode_whitespace()
*/

enum TokenType {
    ARROW,
    DOUBLE_ARROW,
    BACK_ARROW,
    BLOCK_COMMENT_START,
    BLOCK_COMMENT_END,
    LINE_COMMENT,
    GLUE,
    LINE_START,
    STITCH_START,
    KNOT_START,
    FUNCTION_START,
    VAR_START,
    CONST_START,
    LIST_START,
    EMPTY_LINE,
    LINE_END,
};

static const char *KW_FUNCTION = "function";
static const char *KW_VAR = "VAR";
static const char *KW_CONST = "CONST";
static const char *KW_LIST = "LIST";
static const char *PAIR_BLOCK_COMMENT_END = "*/";

static int is_unicode_whitespace(int32_t wc) {
    // Does not contain \n and \r since this is handled by LINE_END
    switch (wc) {
        case L' ':   // Space (U+0020)
        case L'\t':  // Tab (U+0009)
        case L'\v':  // Vertical Tab (U+000B)
        case L'\f':  // Form Feed (U+000C)
        case L'\u00A0': // No-Break Space (U+00A0)
        case L'\u1680': // Ogham Space Mark (U+1680)
        case L'\u2000': // En Quad (U+2000)
        case L'\u2001': // Em Quad (U+2001)
        case L'\u2002': // En Space (U+2002)
        case L'\u2003': // Em Space (U+2003)
        case L'\u2004': // Three-Per-Em Space (U+2004)
        case L'\u2005': // Four-Per-Em Space (U+2005)
        case L'\u2006': // Six-Per-Em Space (U+2006)
        case L'\u2007': // Figure Space (U+2007)
        case L'\u2008': // Punctuation Space (U+2008)
        case L'\u2009': // Thin Space (U+2009)
        case L'\u200A': // Hair Space (U+200A)
        case L'\u2028': // Line Separator (U+2028)
        case L'\u2029': // Paragraph Separator (U+2029)
        case L'\u202F': // Narrow No-Break Space (U+202F)
        case L'\u205F': // Medium Mathematical Space (U+205F)
        case L'\u3000': // Ideographic Space (U+3000)
            return 1;
        default:
            return 0;
    }
}

static bool lex_keyword(TSLexer *lexer, const char *keyword) {
    for (int i = 0; keyword[i] != '\0'; i++) {
        if (lexer->lookahead != keyword[i]) {
            return false;
        }
        lexer->advance(lexer, false);
    }
    return true;
}

static void skip_function_spacing(TSLexer *lexer) {
    while (lexer->lookahead == '=' || is_unicode_whitespace(lexer->lookahead)) {
        lexer->advance(lexer, false);
    }
}

static void skip_whitespace(TSLexer *lexer) {
    while (is_unicode_whitespace(lexer->lookahead)) {
        lexer->advance(lexer, false);
    }
}

static void skip_whitespace_and_newline(TSLexer *lexer) {
    while (
        is_unicode_whitespace(lexer->lookahead) ||
        lexer->lookahead == '\n' ||
        lexer->lookahead == '\r'
    ) {
        lexer->advance(lexer, false);
    }
}

static void skip_newline(TSLexer *lexer) {
    while (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
        lexer->advance(lexer, false);
    }
}

static bool check_keyword(
    TSLexer *lexer,
    const bool *valid_symbols,
    const enum TokenType token,
    const char* keyword
) {
    if (lexer->lookahead == keyword[0] && valid_symbols[token]) {
        if (lex_keyword(lexer, keyword)) {
            if (is_unicode_whitespace(lexer->lookahead)) {
                lexer->mark_end(lexer);
                lexer->result_symbol = token;
                return true;
            }
        }
    }
    return false;
}

static bool check_pair(
    TSLexer *lexer,
    const bool *valid_symbols,
    const enum TokenType token,
    const char* pair
) {
    if (valid_symbols[token] && lexer->lookahead == pair[0]) {
        lexer->advance(lexer, false);
        if (lexer->lookahead == pair[1]) {
            lexer->advance(lexer, false);
            lexer->result_symbol = token;
            return true;
        }
    }
    return false;
}

static bool check_start_tokens(TSLexer *lexer, const bool *valid_symbols) {
    if (
        lexer->get_column(lexer) == 0 && !lexer->eof(lexer) &&
        (
            valid_symbols[LINE_START] ||
            valid_symbols[STITCH_START] ||
            valid_symbols[KNOT_START] ||
            valid_symbols[FUNCTION_START] ||
            valid_symbols[VAR_START] ||
            valid_symbols[CONST_START] ||
            valid_symbols[EMPTY_LINE]
        )
    ) {
        lexer->result_symbol = LINE_START;
        skip_whitespace(lexer);
        lexer->mark_end(lexer);
        if (
            valid_symbols[EMPTY_LINE] &&
            (lexer->lookahead == '\n' || lexer->lookahead == '\r' || lexer->eof(lexer))
        ) {
            lexer->result_symbol = EMPTY_LINE;
            skip_newline(lexer);
            lexer->mark_end(lexer);
            return true;
        }
        if (
            lexer->lookahead == '=' &&
            (
                valid_symbols[KNOT_START] ||
                valid_symbols[STITCH_START]
            )
        ) {
            lexer->result_symbol = STITCH_START;
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            if (lexer->lookahead == '=' && valid_symbols[KNOT_START]) {
                lexer->advance(lexer, false);
                lexer->mark_end(lexer);
                lexer->result_symbol = KNOT_START;
                skip_function_spacing(lexer);
                if (lexer->lookahead == 'f' && valid_symbols[FUNCTION_START]) {
                    if (lex_keyword(lexer, KW_FUNCTION)) {
                        lexer->mark_end(lexer);
                        if (
                            lexer->lookahead == '(' ||
                            is_unicode_whitespace(lexer->lookahead)
                        ) {
                            lexer->result_symbol = FUNCTION_START;
                        }
                    }
                }
            }
            return true;
        }
        if (check_keyword(lexer, valid_symbols, VAR_START, KW_VAR)) {
            return true;
        }
        if (check_keyword(lexer, valid_symbols, CONST_START, KW_CONST)) {
            return true;
        }
        if (check_keyword(lexer, valid_symbols, LIST_START, KW_LIST)) {
            return true;
        }
        if (valid_symbols[LINE_START]) {
            return true;
        } else {
            lexer->result_symbol = 0;
        }
    }
    return false;
}

static bool check_line_end(TSLexer *lexer, const bool *valid_symbols) {
    if (
        valid_symbols[LINE_END] &&
        (
            lexer->lookahead == '\n' ||
            lexer->lookahead == '\r' ||
            lexer->eof(lexer)
        )
    ) {
        lexer->result_symbol = LINE_END;
        skip_newline(lexer);
        return true;
    }
    return false;
}

static bool check_arrows(TSLexer *lexer, const bool *valid_symbols) {
    if (
        (
            valid_symbols[ARROW] ||
            valid_symbols[DOUBLE_ARROW]
        )
        && lexer->lookahead == '-'
    ) {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '>') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            if (valid_symbols[DOUBLE_ARROW] && lexer->lookahead == '-') {
                lexer->advance(lexer, false);
                if (lexer->lookahead == '>') {
                    lexer->advance(lexer, false);
                    lexer->mark_end(lexer);
                    lexer->result_symbol = DOUBLE_ARROW;
                    return true;
                }
            }
            lexer->result_symbol = ARROW;
            return true;
        }
    }
    return false;
}

static bool check_commment_start(TSLexer *lexer, const bool *valid_symbols) {
    if (
        (
            valid_symbols[BLOCK_COMMENT_START] ||
            valid_symbols[LINE_COMMENT]
        )
        && lexer->lookahead == '/'
    ) {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '*') {
            lexer->advance(lexer, false);
            lexer->result_symbol = BLOCK_COMMENT_START;
            return true;
        } else if (lexer->lookahead == '/') {
            lexer->advance(lexer, false);
            lexer->result_symbol = LINE_COMMENT;
            while (lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                lexer->advance(lexer, false);
            }
            return true;
        }
    }
    return false;
}

static bool check_glue_back_arrow(TSLexer *lexer, const bool *valid_symbols) {
    if (
        (
            valid_symbols[BACK_ARROW] ||
            valid_symbols[GLUE]
        )
        && lexer->lookahead == '<'
    ) {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '-') {
            lexer->advance(lexer, false);
            lexer->result_symbol = BACK_ARROW;
            return true;
        } else if (lexer->lookahead == '>') {
            lexer->advance(lexer, false);
            lexer->result_symbol = GLUE;
            return true;
        }
    }
    return false;
}

static bool scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    // Position dependant lexes (whitespaces may not be consumed)
    if (check_start_tokens(lexer, valid_symbols)) return true;

    // Position independant lexes (whitespaces must be consumed)
    skip_whitespace(lexer);
    if (check_glue_back_arrow(lexer, valid_symbols)) return true;
    if (check_line_end(lexer, valid_symbols)) return true;
    if (check_arrows(lexer, valid_symbols)) return true;
    if (check_commment_start(lexer, valid_symbols)) return true;
    if (check_pair(lexer, valid_symbols, BLOCK_COMMENT_END, PAIR_BLOCK_COMMENT_END)) {
        return true;
    }
    return false;
}

bool tree_sitter_ink_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    bool result = scan(payload, lexer, valid_symbols);
    //fprintf(stderr, "Scan: %d %d\n", result, lexer->result_symbol);
    return result;
}

void *tree_sitter_ink_external_scanner_create() {
    return NULL;
}

void tree_sitter_ink_external_scanner_destroy(void *payload) {
}

unsigned tree_sitter_ink_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_ink_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
}
