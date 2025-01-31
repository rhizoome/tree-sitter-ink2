#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_choice_text_token1 = 1,
  aux_sym_code_text_token1 = 2,
  aux_sym_other_token1 = 3,
  sym_arrow = 4,
  sym_minus = 5,
  sym_body_start = 6,
  sym_knot_start = 7,
  sym_line_end = 8,
  sym_program = 9,
  sym_body = 10,
  sym_body_line = 11,
  sym_knot = 12,
  sym_choice_text = 13,
  sym_code_text = 14,
  sym_dialog_text = 15,
  sym_text = 16,
  sym_other = 17,
  aux_sym_program_repeat1 = 18,
  aux_sym_body_repeat1 = 19,
  aux_sym_text_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_choice_text_token1] = "choice_text_token1",
  [aux_sym_code_text_token1] = "code_text_token1",
  [aux_sym_other_token1] = "other_token1",
  [sym_arrow] = "arrow",
  [sym_minus] = "minus",
  [sym_body_start] = "body_start",
  [sym_knot_start] = "knot_start",
  [sym_line_end] = "line_end",
  [sym_program] = "program",
  [sym_body] = "body",
  [sym_body_line] = "body_line",
  [sym_knot] = "knot",
  [sym_choice_text] = "choice_text",
  [sym_code_text] = "code_text",
  [sym_dialog_text] = "dialog_text",
  [sym_text] = "text",
  [sym_other] = "other",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_choice_text_token1] = aux_sym_choice_text_token1,
  [aux_sym_code_text_token1] = aux_sym_code_text_token1,
  [aux_sym_other_token1] = aux_sym_other_token1,
  [sym_arrow] = sym_arrow,
  [sym_minus] = sym_minus,
  [sym_body_start] = sym_body_start,
  [sym_knot_start] = sym_knot_start,
  [sym_line_end] = sym_line_end,
  [sym_program] = sym_program,
  [sym_body] = sym_body,
  [sym_body_line] = sym_body_line,
  [sym_knot] = sym_knot,
  [sym_choice_text] = sym_choice_text,
  [sym_code_text] = sym_code_text,
  [sym_dialog_text] = sym_dialog_text,
  [sym_text] = sym_text,
  [sym_other] = sym_other,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_choice_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_other_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_body_start] = {
    .visible = true,
    .named = true,
  },
  [sym_knot_start] = {
    .visible = true,
    .named = true,
  },
  [sym_line_end] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_body_line] = {
    .visible = true,
    .named = true,
  },
  [sym_knot] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_text] = {
    .visible = true,
    .named = true,
  },
  [sym_code_text] = {
    .visible = true,
    .named = true,
  },
  [sym_dialog_text] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_other] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '~') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_choice_text_token1);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_code_text_token1);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_other_token1);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_other_token1);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(5);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_other_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(5);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 1, .external_lex_state = 4},
  [6] = {.lex_state = 1, .external_lex_state = 4},
  [7] = {.lex_state = 1, .external_lex_state = 4},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 5},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0, .external_lex_state = 6},
  [19] = {.lex_state = 0, .external_lex_state = 6},
  [20] = {.lex_state = 0, .external_lex_state = 6},
  [21] = {.lex_state = 0, .external_lex_state = 6},
  [22] = {.lex_state = 0, .external_lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_choice_text_token1] = ACTIONS(1),
    [aux_sym_code_text_token1] = ACTIONS(1),
    [aux_sym_other_token1] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [sym_body_start] = ACTIONS(1),
    [sym_knot_start] = ACTIONS(1),
    [sym_line_end] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(17),
    [sym_body] = STATE(3),
    [sym_body_line] = STATE(10),
    [sym_knot] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [aux_sym_body_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_body_start] = ACTIONS(5),
    [sym_knot_start] = ACTIONS(7),
  },
  [2] = {
    [sym_choice_text] = STATE(18),
    [sym_code_text] = STATE(18),
    [sym_dialog_text] = STATE(18),
    [sym_text] = STATE(19),
    [sym_other] = STATE(8),
    [aux_sym_text_repeat1] = STATE(8),
    [aux_sym_choice_text_token1] = ACTIONS(9),
    [aux_sym_code_text_token1] = ACTIONS(11),
    [aux_sym_other_token1] = ACTIONS(13),
    [sym_arrow] = ACTIONS(15),
    [sym_minus] = ACTIONS(15),
    [sym_line_end] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      sym_body_start,
    ACTIONS(7), 1,
      sym_knot_start,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_body_line,
      aux_sym_body_repeat1,
    STATE(4), 3,
      sym_body,
      sym_knot,
      aux_sym_program_repeat1,
  [19] = 5,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_body_start,
    ACTIONS(26), 1,
      sym_knot_start,
    STATE(10), 2,
      sym_body_line,
      aux_sym_body_repeat1,
    STATE(4), 3,
      sym_body,
      sym_knot,
      aux_sym_program_repeat1,
  [38] = 4,
    ACTIONS(29), 1,
      aux_sym_other_token1,
    STATE(22), 1,
      sym_text,
    ACTIONS(15), 2,
      sym_arrow,
      sym_minus,
    STATE(8), 2,
      sym_other,
      aux_sym_text_repeat1,
  [53] = 4,
    ACTIONS(29), 1,
      aux_sym_other_token1,
    STATE(20), 1,
      sym_text,
    ACTIONS(15), 2,
      sym_arrow,
      sym_minus,
    STATE(8), 2,
      sym_other,
      aux_sym_text_repeat1,
  [68] = 4,
    ACTIONS(29), 1,
      aux_sym_other_token1,
    STATE(21), 1,
      sym_text,
    ACTIONS(15), 2,
      sym_arrow,
      sym_minus,
    STATE(8), 2,
      sym_other,
      aux_sym_text_repeat1,
  [83] = 4,
    ACTIONS(29), 1,
      aux_sym_other_token1,
    ACTIONS(33), 1,
      sym_line_end,
    ACTIONS(31), 2,
      sym_arrow,
      sym_minus,
    STATE(9), 2,
      sym_other,
      aux_sym_text_repeat1,
  [98] = 4,
    ACTIONS(35), 1,
      aux_sym_other_token1,
    ACTIONS(41), 1,
      sym_line_end,
    ACTIONS(38), 2,
      sym_arrow,
      sym_minus,
    STATE(9), 2,
      sym_other,
      aux_sym_text_repeat1,
  [113] = 3,
    ACTIONS(5), 1,
      sym_body_start,
    ACTIONS(43), 2,
      sym_knot_start,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_body_line,
      aux_sym_body_repeat1,
  [125] = 3,
    ACTIONS(47), 1,
      sym_body_start,
    ACTIONS(45), 2,
      sym_knot_start,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_body_line,
      aux_sym_body_repeat1,
  [137] = 1,
    ACTIONS(50), 4,
      sym_arrow,
      sym_minus,
      sym_line_end,
      aux_sym_other_token1,
  [144] = 3,
    ACTIONS(5), 1,
      sym_body_start,
    STATE(16), 1,
      sym_body,
    STATE(10), 2,
      sym_body_line,
      aux_sym_body_repeat1,
  [155] = 1,
    ACTIONS(52), 3,
      sym_body_start,
      sym_knot_start,
      ts_builtin_sym_end,
  [161] = 1,
    ACTIONS(54), 3,
      sym_body_start,
      sym_knot_start,
      ts_builtin_sym_end,
  [167] = 1,
    ACTIONS(56), 3,
      sym_body_start,
      sym_knot_start,
      ts_builtin_sym_end,
  [173] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [177] = 1,
    ACTIONS(60), 1,
      sym_line_end,
  [181] = 1,
    ACTIONS(62), 1,
      sym_line_end,
  [185] = 1,
    ACTIONS(64), 1,
      sym_line_end,
  [189] = 1,
    ACTIONS(66), 1,
      sym_line_end,
  [193] = 1,
    ACTIONS(68), 1,
      sym_line_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 19,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 53,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 113,
  [SMALL_STATE(11)] = 125,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 144,
  [SMALL_STATE(14)] = 155,
  [SMALL_STATE(15)] = 161,
  [SMALL_STATE(16)] = 167,
  [SMALL_STATE(17)] = 173,
  [SMALL_STATE(18)] = 177,
  [SMALL_STATE(19)] = 181,
  [SMALL_STATE(20)] = 185,
  [SMALL_STATE(21)] = 189,
  [SMALL_STATE(22)] = 193,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialog_text, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_text, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_arrow = 0,
  ts_external_token_minus = 1,
  ts_external_token_body_start = 2,
  ts_external_token_knot_start = 3,
  ts_external_token_line_end = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_arrow] = sym_arrow,
  [ts_external_token_minus] = sym_minus,
  [ts_external_token_body_start] = sym_body_start,
  [ts_external_token_knot_start] = sym_knot_start,
  [ts_external_token_line_end] = sym_line_end,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_arrow] = true,
    [ts_external_token_minus] = true,
    [ts_external_token_body_start] = true,
    [ts_external_token_knot_start] = true,
    [ts_external_token_line_end] = true,
  },
  [2] = {
    [ts_external_token_body_start] = true,
    [ts_external_token_knot_start] = true,
  },
  [3] = {
    [ts_external_token_arrow] = true,
    [ts_external_token_minus] = true,
    [ts_external_token_line_end] = true,
  },
  [4] = {
    [ts_external_token_arrow] = true,
    [ts_external_token_minus] = true,
  },
  [5] = {
    [ts_external_token_body_start] = true,
  },
  [6] = {
    [ts_external_token_line_end] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_ink_external_scanner_create(void);
void tree_sitter_ink_external_scanner_destroy(void *);
bool tree_sitter_ink_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_ink_external_scanner_serialize(void *, char *);
void tree_sitter_ink_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ink(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_ink_external_scanner_create,
      tree_sitter_ink_external_scanner_destroy,
      tree_sitter_ink_external_scanner_scan,
      tree_sitter_ink_external_scanner_serialize,
      tree_sitter_ink_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
