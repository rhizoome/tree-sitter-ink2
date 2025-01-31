#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_other_token1 = 1,
  sym_arrow = 2,
  sym_minus = 3,
  sym_body_start = 4,
  sym_knot_start = 5,
  sym_choice_start = 6,
  sym_line_end = 7,
  sym_program = 8,
  sym_other = 9,
  aux_sym_program_repeat1 = 10,
  aux_sym_program_repeat2 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_other_token1] = "other_token1",
  [sym_arrow] = "arrow",
  [sym_minus] = "minus",
  [sym_body_start] = "body_start",
  [sym_knot_start] = "knot_start",
  [sym_choice_start] = "choice_start",
  [sym_line_end] = "line_end",
  [sym_program] = "program",
  [sym_other] = "other",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_other_token1] = aux_sym_other_token1,
  [sym_arrow] = sym_arrow,
  [sym_minus] = sym_minus,
  [sym_body_start] = sym_body_start,
  [sym_knot_start] = sym_knot_start,
  [sym_choice_start] = sym_choice_start,
  [sym_line_end] = sym_line_end,
  [sym_program] = sym_program,
  [sym_other] = sym_other,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_choice_start] = {
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
  [sym_other] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '\n') SKIP(0);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_other_token1);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_other_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_other_token1] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [sym_body_start] = ACTIONS(1),
    [sym_knot_start] = ACTIONS(1),
    [sym_choice_start] = ACTIONS(1),
    [sym_line_end] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(10),
    [aux_sym_program_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_body_start] = ACTIONS(5),
    [sym_knot_start] = ACTIONS(5),
    [sym_choice_start] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      aux_sym_other_token1,
    ACTIONS(11), 1,
      sym_line_end,
    ACTIONS(9), 2,
      sym_arrow,
      sym_minus,
    STATE(3), 2,
      sym_other,
      aux_sym_program_repeat1,
  [15] = 4,
    ACTIONS(7), 1,
      aux_sym_other_token1,
    ACTIONS(15), 1,
      sym_line_end,
    ACTIONS(13), 2,
      sym_arrow,
      sym_minus,
    STATE(4), 2,
      sym_other,
      aux_sym_program_repeat1,
  [30] = 4,
    ACTIONS(17), 1,
      aux_sym_other_token1,
    ACTIONS(23), 1,
      sym_line_end,
    ACTIONS(20), 2,
      sym_arrow,
      sym_minus,
    STATE(4), 2,
      sym_other,
      aux_sym_program_repeat1,
  [45] = 3,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_program_repeat2,
    ACTIONS(5), 3,
      sym_body_start,
      sym_knot_start,
      sym_choice_start,
  [57] = 3,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_program_repeat2,
    ACTIONS(29), 3,
      sym_body_start,
      sym_knot_start,
      sym_choice_start,
  [69] = 1,
    ACTIONS(27), 4,
      sym_body_start,
      sym_knot_start,
      sym_choice_start,
      ts_builtin_sym_end,
  [76] = 1,
    ACTIONS(32), 4,
      sym_arrow,
      sym_minus,
      sym_line_end,
      aux_sym_other_token1,
  [83] = 1,
    ACTIONS(34), 4,
      sym_body_start,
      sym_knot_start,
      sym_choice_start,
      ts_builtin_sym_end,
  [90] = 1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 83,
  [SMALL_STATE(10)] = 90,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_arrow = 0,
  ts_external_token_minus = 1,
  ts_external_token_body_start = 2,
  ts_external_token_knot_start = 3,
  ts_external_token_choice_start = 4,
  ts_external_token_line_end = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_arrow] = sym_arrow,
  [ts_external_token_minus] = sym_minus,
  [ts_external_token_body_start] = sym_body_start,
  [ts_external_token_knot_start] = sym_knot_start,
  [ts_external_token_choice_start] = sym_choice_start,
  [ts_external_token_line_end] = sym_line_end,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_arrow] = true,
    [ts_external_token_minus] = true,
    [ts_external_token_body_start] = true,
    [ts_external_token_knot_start] = true,
    [ts_external_token_choice_start] = true,
    [ts_external_token_line_end] = true,
  },
  [2] = {
    [ts_external_token_body_start] = true,
    [ts_external_token_knot_start] = true,
    [ts_external_token_choice_start] = true,
  },
  [3] = {
    [ts_external_token_arrow] = true,
    [ts_external_token_minus] = true,
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
