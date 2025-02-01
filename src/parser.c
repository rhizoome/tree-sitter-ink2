#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_choice_text_token1 = 1,
  aux_sym_code_text_token1 = 2,
  aux_sym_other_token1 = 3,
  sym_arrow = 4,
  sym_minus = 5,
  sym_body_start = 6,
  sym_stitch_start = 7,
  sym_knot_start = 8,
  sym_line_end = 9,
  sym_program = 10,
  sym_knot = 11,
  sym_stitch = 12,
  sym_body = 13,
  sym_body_line = 14,
  sym_choice_text = 15,
  sym_code_text = 16,
  sym_dialog_text = 17,
  sym_text = 18,
  sym_other = 19,
  aux_sym_program_repeat1 = 20,
  aux_sym_knot_repeat1 = 21,
  aux_sym_body_repeat1 = 22,
  aux_sym_text_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_choice_text_token1] = "choice_text_token1",
  [aux_sym_code_text_token1] = "code_text_token1",
  [aux_sym_other_token1] = "other_token1",
  [sym_arrow] = "arrow",
  [sym_minus] = "minus",
  [sym_body_start] = "body_start",
  [sym_stitch_start] = "stitch_start",
  [sym_knot_start] = "knot_start",
  [sym_line_end] = "line_end",
  [sym_program] = "program",
  [sym_knot] = "knot",
  [sym_stitch] = "stitch",
  [sym_body] = "body",
  [sym_body_line] = "body_line",
  [sym_choice_text] = "choice_text",
  [sym_code_text] = "code_text",
  [sym_dialog_text] = "dialog_text",
  [sym_text] = "text",
  [sym_other] = "other",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_knot_repeat1] = "knot_repeat1",
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
  [sym_stitch_start] = sym_stitch_start,
  [sym_knot_start] = sym_knot_start,
  [sym_line_end] = sym_line_end,
  [sym_program] = sym_program,
  [sym_knot] = sym_knot,
  [sym_stitch] = sym_stitch,
  [sym_body] = sym_body,
  [sym_body_line] = sym_body_line,
  [sym_choice_text] = sym_choice_text,
  [sym_code_text] = sym_code_text,
  [sym_dialog_text] = sym_dialog_text,
  [sym_text] = sym_text,
  [sym_other] = sym_other,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_knot_repeat1] = aux_sym_knot_repeat1,
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
  [sym_stitch_start] = {
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
  [sym_knot] = {
    .visible = true,
    .named = true,
  },
  [sym_stitch] = {
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
  [aux_sym_knot_repeat1] = {
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
  [3] = 2,
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
  [14] = 12,
  [15] = 10,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 23,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 35,
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
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 4},
  [5] = {.lex_state = 1, .external_lex_state = 5},
  [6] = {.lex_state = 1, .external_lex_state = 3},
  [7] = {.lex_state = 1, .external_lex_state = 3},
  [8] = {.lex_state = 1, .external_lex_state = 5},
  [9] = {.lex_state = 1, .external_lex_state = 5},
  [10] = {.lex_state = 0, .external_lex_state = 4},
  [11] = {.lex_state = 1, .external_lex_state = 5},
  [12] = {.lex_state = 0, .external_lex_state = 4},
  [13] = {.lex_state = 0, .external_lex_state = 6},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 6},
  [17] = {.lex_state = 0, .external_lex_state = 6},
  [18] = {.lex_state = 0, .external_lex_state = 6},
  [19] = {.lex_state = 0, .external_lex_state = 7},
  [20] = {.lex_state = 0, .external_lex_state = 7},
  [21] = {.lex_state = 0, .external_lex_state = 7},
  [22] = {.lex_state = 0, .external_lex_state = 7},
  [23] = {.lex_state = 0, .external_lex_state = 4},
  [24] = {.lex_state = 0, .external_lex_state = 8},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 4},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 6},
  [30] = {.lex_state = 0, .external_lex_state = 9},
  [31] = {.lex_state = 0, .external_lex_state = 9},
  [32] = {.lex_state = 0, .external_lex_state = 9},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0, .external_lex_state = 9},
  [35] = {.lex_state = 0, .external_lex_state = 9},
  [36] = {.lex_state = 0, .external_lex_state = 9},
  [37] = {.lex_state = 0, .external_lex_state = 9},
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
    [sym_stitch_start] = ACTIONS(1),
    [sym_knot_start] = ACTIONS(1),
    [sym_line_end] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(33),
    [sym_knot] = STATE(19),
    [sym_body] = STATE(22),
    [sym_body_line] = STATE(15),
    [aux_sym_program_repeat1] = STATE(19),
    [aux_sym_body_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_body_start] = ACTIONS(5),
    [sym_knot_start] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      aux_sym_choice_text_token1,
    ACTIONS(11), 1,
      aux_sym_code_text_token1,
    ACTIONS(13), 1,
      aux_sym_other_token1,
    ACTIONS(17), 1,
      sym_line_end,
    STATE(36), 1,
      sym_text,
    ACTIONS(15), 2,
      sym_arrow,
      sym_minus,
    STATE(7), 2,
      sym_other,
      aux_sym_text_repeat1,
    STATE(35), 3,
      sym_choice_text,
      sym_code_text,
      sym_dialog_text,
  [29] = 8,
    ACTIONS(9), 1,
      aux_sym_choice_text_token1,
    ACTIONS(11), 1,
      aux_sym_code_text_token1,
    ACTIONS(13), 1,
      aux_sym_other_token1,
    ACTIONS(19), 1,
      sym_line_end,
    STATE(36), 1,
      sym_text,
    ACTIONS(15), 2,
      sym_arrow,
      sym_minus,
    STATE(7), 2,
      sym_other,
      aux_sym_text_repeat1,
    STATE(37), 3,
      sym_choice_text,
      sym_code_text,
      sym_dialog_text,
  [58] = 6,
    ACTIONS(23), 1,
      sym_body_start,
    ACTIONS(25), 1,
      sym_stitch_start,
    STATE(16), 1,
      sym_body,
    ACTIONS(21), 2,
      sym_knot_start,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_body_line,
      aux_sym_body_repeat1,
    STATE(17), 2,
      sym_stitch,
      aux_sym_knot_repeat1,
  [80] = 4,
    ACTIONS(27), 1,
      aux_sym_other_token1,
    STATE(30), 1,
      sym_text,
    ACTIONS(15), 2,
      sym_arrow,
      sym_minus,
    STATE(7), 2,
      sym_other,
      aux_sym_text_repeat1,
  [95] = 4,
    ACTIONS(29), 1,
      aux_sym_other_token1,
    ACTIONS(35), 1,
      sym_line_end,
    ACTIONS(32), 2,
      sym_arrow,
      sym_minus,
    STATE(6), 2,
      sym_other,
      aux_sym_text_repeat1,
  [110] = 4,
    ACTIONS(27), 1,
      aux_sym_other_token1,
    ACTIONS(39), 1,
      sym_line_end,
    ACTIONS(37), 2,
      sym_arrow,
      sym_minus,
    STATE(6), 2,
      sym_other,
      aux_sym_text_repeat1,
  [125] = 4,
    ACTIONS(27), 1,
      aux_sym_other_token1,
    STATE(31), 1,
      sym_text,
    ACTIONS(15), 2,
      sym_arrow,
      sym_minus,
    STATE(7), 2,
      sym_other,
      aux_sym_text_repeat1,
  [140] = 4,
    ACTIONS(27), 1,
      aux_sym_other_token1,
    STATE(32), 1,
      sym_text,
    ACTIONS(15), 2,
      sym_arrow,
      sym_minus,
    STATE(7), 2,
      sym_other,
      aux_sym_text_repeat1,
  [155] = 3,
    ACTIONS(23), 1,
      sym_body_start,
    STATE(12), 2,
      sym_body_line,
      aux_sym_body_repeat1,
    ACTIONS(41), 3,
      sym_stitch_start,
      sym_knot_start,
      ts_builtin_sym_end,
  [168] = 4,
    ACTIONS(27), 1,
      aux_sym_other_token1,
    STATE(34), 1,
      sym_text,
    ACTIONS(15), 2,
      sym_arrow,
      sym_minus,
    STATE(7), 2,
      sym_other,
      aux_sym_text_repeat1,
  [183] = 3,
    ACTIONS(45), 1,
      sym_body_start,
    STATE(12), 2,
      sym_body_line,
      aux_sym_body_repeat1,
    ACTIONS(43), 3,
      sym_stitch_start,
      sym_knot_start,
      ts_builtin_sym_end,
  [196] = 3,
    ACTIONS(25), 1,
      sym_stitch_start,
    ACTIONS(48), 2,
      sym_knot_start,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_stitch,
      aux_sym_knot_repeat1,
  [208] = 3,
    ACTIONS(50), 1,
      sym_body_start,
    ACTIONS(43), 2,
      sym_knot_start,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_body_line,
      aux_sym_body_repeat1,
  [220] = 3,
    ACTIONS(5), 1,
      sym_body_start,
    ACTIONS(41), 2,
      sym_knot_start,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_body_line,
      aux_sym_body_repeat1,
  [232] = 3,
    ACTIONS(25), 1,
      sym_stitch_start,
    ACTIONS(53), 2,
      sym_knot_start,
      ts_builtin_sym_end,
    STATE(13), 2,
      sym_stitch,
      aux_sym_knot_repeat1,
  [244] = 3,
    ACTIONS(25), 1,
      sym_stitch_start,
    ACTIONS(53), 2,
      sym_knot_start,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_stitch,
      aux_sym_knot_repeat1,
  [256] = 3,
    ACTIONS(57), 1,
      sym_stitch_start,
    ACTIONS(55), 2,
      sym_knot_start,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_stitch,
      aux_sym_knot_repeat1,
  [268] = 3,
    ACTIONS(7), 1,
      sym_knot_start,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_knot,
      aux_sym_program_repeat1,
  [279] = 3,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      sym_knot_start,
    STATE(20), 2,
      sym_knot,
      aux_sym_program_repeat1,
  [290] = 3,
    ACTIONS(7), 1,
      sym_knot_start,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_knot,
      aux_sym_program_repeat1,
  [301] = 3,
    ACTIONS(7), 1,
      sym_knot_start,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym_knot,
      aux_sym_program_repeat1,
  [312] = 1,
    ACTIONS(69), 4,
      sym_body_start,
      sym_stitch_start,
      sym_knot_start,
      ts_builtin_sym_end,
  [319] = 3,
    ACTIONS(23), 1,
      sym_body_start,
    STATE(29), 1,
      sym_body,
    STATE(10), 2,
      sym_body_line,
      aux_sym_body_repeat1,
  [330] = 1,
    ACTIONS(71), 4,
      sym_arrow,
      sym_minus,
      sym_line_end,
      aux_sym_other_token1,
  [337] = 1,
    ACTIONS(73), 4,
      sym_body_start,
      sym_stitch_start,
      sym_knot_start,
      ts_builtin_sym_end,
  [344] = 1,
    ACTIONS(73), 3,
      sym_body_start,
      sym_knot_start,
      ts_builtin_sym_end,
  [350] = 1,
    ACTIONS(69), 3,
      sym_body_start,
      sym_knot_start,
      ts_builtin_sym_end,
  [356] = 1,
    ACTIONS(75), 3,
      sym_stitch_start,
      sym_knot_start,
      ts_builtin_sym_end,
  [362] = 1,
    ACTIONS(77), 1,
      sym_line_end,
  [366] = 1,
    ACTIONS(79), 1,
      sym_line_end,
  [370] = 1,
    ACTIONS(81), 1,
      sym_line_end,
  [374] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [378] = 1,
    ACTIONS(85), 1,
      sym_line_end,
  [382] = 1,
    ACTIONS(87), 1,
      sym_line_end,
  [386] = 1,
    ACTIONS(89), 1,
      sym_line_end,
  [390] = 1,
    ACTIONS(91), 1,
      sym_line_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 140,
  [SMALL_STATE(10)] = 155,
  [SMALL_STATE(11)] = 168,
  [SMALL_STATE(12)] = 183,
  [SMALL_STATE(13)] = 196,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 220,
  [SMALL_STATE(16)] = 232,
  [SMALL_STATE(17)] = 244,
  [SMALL_STATE(18)] = 256,
  [SMALL_STATE(19)] = 268,
  [SMALL_STATE(20)] = 279,
  [SMALL_STATE(21)] = 290,
  [SMALL_STATE(22)] = 301,
  [SMALL_STATE(23)] = 312,
  [SMALL_STATE(24)] = 319,
  [SMALL_STATE(25)] = 330,
  [SMALL_STATE(26)] = 337,
  [SMALL_STATE(27)] = 344,
  [SMALL_STATE(28)] = 350,
  [SMALL_STATE(29)] = 356,
  [SMALL_STATE(30)] = 362,
  [SMALL_STATE(31)] = 366,
  [SMALL_STATE(32)] = 370,
  [SMALL_STATE(33)] = 374,
  [SMALL_STATE(34)] = 378,
  [SMALL_STATE(35)] = 382,
  [SMALL_STATE(36)] = 386,
  [SMALL_STATE(37)] = 390,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 5, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_knot_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_knot_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_text, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialog_text, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_arrow = 0,
  ts_external_token_minus = 1,
  ts_external_token_body_start = 2,
  ts_external_token_stitch_start = 3,
  ts_external_token_knot_start = 4,
  ts_external_token_line_end = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_arrow] = sym_arrow,
  [ts_external_token_minus] = sym_minus,
  [ts_external_token_body_start] = sym_body_start,
  [ts_external_token_stitch_start] = sym_stitch_start,
  [ts_external_token_knot_start] = sym_knot_start,
  [ts_external_token_line_end] = sym_line_end,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_arrow] = true,
    [ts_external_token_minus] = true,
    [ts_external_token_body_start] = true,
    [ts_external_token_stitch_start] = true,
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
    [ts_external_token_body_start] = true,
    [ts_external_token_stitch_start] = true,
    [ts_external_token_knot_start] = true,
  },
  [5] = {
    [ts_external_token_arrow] = true,
    [ts_external_token_minus] = true,
  },
  [6] = {
    [ts_external_token_stitch_start] = true,
    [ts_external_token_knot_start] = true,
  },
  [7] = {
    [ts_external_token_knot_start] = true,
  },
  [8] = {
    [ts_external_token_body_start] = true,
  },
  [9] = {
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
