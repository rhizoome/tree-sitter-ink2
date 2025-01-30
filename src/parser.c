#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  aux_sym_program_token1 = 1,
  anon_sym_LBRACE = 2,
  aux_sym_inline_logic_token1 = 3,
  anon_sym_RBRACE = 4,
  anon_sym_DASH = 5,
  sym_divert_start = 6,
  sym_identifier = 7,
  sym_knot_start = 8,
  sym_stitch_start = 9,
  sym_text = 10,
  sym_rest = 11,
  sym_program = 12,
  sym_knot = 13,
  sym_body = 14,
  sym_stitch = 15,
  sym_inline_logic = 16,
  sym_dialog = 17,
  sym_divert = 18,
  aux_sym_program_repeat1 = 19,
  aux_sym_body_repeat1 = 20,
  aux_sym_dialog_repeat1 = 21,
  aux_sym_dialog_repeat2 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_program_token1] = "program_token1",
  [anon_sym_LBRACE] = "{",
  [aux_sym_inline_logic_token1] = "inline_logic_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [sym_divert_start] = "divert_start",
  [sym_identifier] = "identifier",
  [sym_knot_start] = "knot_start",
  [sym_stitch_start] = "stitch_start",
  [sym_text] = "text",
  [sym_rest] = "rest",
  [sym_program] = "program",
  [sym_knot] = "knot",
  [sym_body] = "body",
  [sym_stitch] = "stitch",
  [sym_inline_logic] = "inline_logic",
  [sym_dialog] = "dialog",
  [sym_divert] = "divert",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_dialog_repeat1] = "dialog_repeat1",
  [aux_sym_dialog_repeat2] = "dialog_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_program_token1] = aux_sym_program_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_inline_logic_token1] = aux_sym_inline_logic_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_divert_start] = sym_divert_start,
  [sym_identifier] = sym_identifier,
  [sym_knot_start] = sym_knot_start,
  [sym_stitch_start] = sym_stitch_start,
  [sym_text] = sym_text,
  [sym_rest] = sym_rest,
  [sym_program] = sym_program,
  [sym_knot] = sym_knot,
  [sym_body] = sym_body,
  [sym_stitch] = sym_stitch,
  [sym_inline_logic] = sym_inline_logic,
  [sym_dialog] = sym_dialog,
  [sym_divert] = sym_divert,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_dialog_repeat1] = aux_sym_dialog_repeat1,
  [aux_sym_dialog_repeat2] = aux_sym_dialog_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_inline_logic_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_divert_start] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_knot_start] = {
    .visible = true,
    .named = true,
  },
  [sym_stitch_start] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_rest] = {
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
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_stitch] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_logic] = {
    .visible = true,
    .named = true,
  },
  [sym_dialog] = {
    .visible = true,
    .named = true,
  },
  [sym_divert] = {
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
  [aux_sym_dialog_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dialog_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_text = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_text, 0},
  [1] =
    {field_text, 1, .inherited = true},
  [2] =
    {field_name, 1},
  [3] =
    {field_text, 0, .inherited = true},
    {field_text, 1, .inherited = true},
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
};

static TSCharacterRange sym_identifier_character_set_1[] = {
  {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1},
  {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f},
  {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556},
  {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5},
  {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1},
  {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858},
  {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961},
  {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd},
  {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28},
  {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d},
  {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1},
  {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d},
  {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10},
  {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c},
  {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2},
  {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f},
  {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46},
  {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd},
  {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a},
  {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e},
  {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258},
  {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5},
  {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c},
  {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c},
  {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa},
  {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54},
  {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f},
  {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa},
  {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b},
  {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3},
  {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102},
  {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d},
  {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3},
  {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae},
  {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006},
  {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c},
  {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca},
  {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873},
  {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2},
  {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76},
  {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd},
  {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a},
  {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9},
  {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41},
  {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc},
  {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b},
  {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0},
  {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d},
  {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
  {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785},
  {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855},
  {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(13);
      if (set_contains(sym_identifier_character_set_1, 429, lookahead)) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_program_token1);
      if (lookahead == '=') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_program_token1);
      if (lookahead == '=') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_inline_logic_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_divert_start);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_identifier_character_set_1, 429, lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_knot_start);
      if (lookahead == '=') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_knot_start);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_stitch_start);
      if (lookahead == '=') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_stitch_start);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '-' &&
          lookahead != '{') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_rest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_program_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_divert_start] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_knot_start] = ACTIONS(1),
    [sym_stitch_start] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(26),
    [sym_knot] = STATE(14),
    [sym_body] = STATE(13),
    [sym_stitch] = STATE(10),
    [sym_dialog] = STATE(10),
    [aux_sym_program_repeat1] = STATE(14),
    [aux_sym_body_repeat1] = STATE(10),
    [aux_sym_program_token1] = ACTIONS(3),
    [sym_knot_start] = ACTIONS(5),
    [sym_stitch_start] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      sym_divert_start,
    ACTIONS(17), 1,
      sym_knot_start,
    ACTIONS(19), 1,
      sym_text,
    STATE(5), 1,
      aux_sym_dialog_repeat1,
    STATE(19), 1,
      sym_divert,
    ACTIONS(9), 2,
      aux_sym_program_token1,
      sym_stitch_start,
    STATE(3), 2,
      sym_inline_logic,
      aux_sym_dialog_repeat2,
  [30] = 7,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym_text,
    STATE(5), 1,
      aux_sym_dialog_repeat1,
    ACTIONS(21), 2,
      aux_sym_program_token1,
      sym_stitch_start,
    ACTIONS(29), 2,
      sym_divert_start,
      sym_knot_start,
    STATE(3), 2,
      sym_inline_logic,
      aux_sym_dialog_repeat2,
  [55] = 6,
    ACTIONS(7), 1,
      sym_stitch_start,
    ACTIONS(34), 1,
      aux_sym_program_token1,
    ACTIONS(37), 1,
      sym_knot_start,
    ACTIONS(39), 1,
      sym_rest,
    STATE(21), 1,
      sym_body,
    STATE(10), 3,
      sym_stitch,
      sym_dialog,
      aux_sym_body_repeat1,
  [76] = 5,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(48), 1,
      sym_text,
    STATE(6), 1,
      aux_sym_dialog_repeat1,
    ACTIONS(41), 2,
      aux_sym_program_token1,
      sym_stitch_start,
    ACTIONS(43), 3,
      anon_sym_LBRACE,
      sym_divert_start,
      sym_knot_start,
  [95] = 5,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(58), 1,
      sym_text,
    STATE(6), 1,
      aux_sym_dialog_repeat1,
    ACTIONS(51), 2,
      aux_sym_program_token1,
      sym_stitch_start,
    ACTIONS(53), 3,
      anon_sym_LBRACE,
      sym_divert_start,
      sym_knot_start,
  [114] = 5,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_dialog_repeat1,
    ACTIONS(19), 2,
      anon_sym_DASH,
      sym_text,
    STATE(2), 2,
      sym_inline_logic,
      aux_sym_dialog_repeat2,
  [132] = 5,
    ACTIONS(7), 1,
      sym_stitch_start,
    ACTIONS(63), 1,
      aux_sym_program_token1,
    ACTIONS(66), 1,
      sym_knot_start,
    STATE(22), 1,
      sym_body,
    STATE(10), 3,
      sym_stitch,
      sym_dialog,
      aux_sym_body_repeat1,
  [150] = 2,
    ACTIONS(68), 3,
      aux_sym_program_token1,
      anon_sym_DASH,
      sym_stitch_start,
    ACTIONS(70), 4,
      anon_sym_LBRACE,
      sym_divert_start,
      sym_knot_start,
      sym_text,
  [162] = 4,
    ACTIONS(7), 1,
      sym_stitch_start,
    ACTIONS(72), 1,
      aux_sym_program_token1,
    ACTIONS(75), 1,
      sym_knot_start,
    STATE(11), 3,
      sym_stitch,
      sym_dialog,
      aux_sym_body_repeat1,
  [177] = 4,
    ACTIONS(77), 1,
      aux_sym_program_token1,
    ACTIONS(80), 1,
      sym_knot_start,
    ACTIONS(82), 1,
      sym_stitch_start,
    STATE(11), 3,
      sym_stitch,
      sym_dialog,
      aux_sym_body_repeat1,
  [192] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      aux_sym_dialog_repeat1,
    ACTIONS(19), 2,
      anon_sym_DASH,
      sym_text,
    STATE(2), 2,
      sym_inline_logic,
      aux_sym_dialog_repeat2,
  [207] = 3,
    ACTIONS(5), 1,
      sym_knot_start,
    ACTIONS(85), 1,
      aux_sym_program_token1,
    STATE(16), 2,
      sym_knot,
      aux_sym_program_repeat1,
  [218] = 3,
    ACTIONS(5), 1,
      sym_knot_start,
    ACTIONS(85), 1,
      aux_sym_program_token1,
    STATE(17), 2,
      sym_knot,
      aux_sym_program_repeat1,
  [229] = 3,
    ACTIONS(89), 1,
      sym_knot_start,
    ACTIONS(91), 1,
      sym_rest,
    ACTIONS(87), 2,
      aux_sym_program_token1,
      sym_stitch_start,
  [240] = 3,
    ACTIONS(5), 1,
      sym_knot_start,
    ACTIONS(93), 1,
      aux_sym_program_token1,
    STATE(17), 2,
      sym_knot,
      aux_sym_program_repeat1,
  [251] = 3,
    ACTIONS(95), 1,
      aux_sym_program_token1,
    ACTIONS(97), 1,
      sym_knot_start,
    STATE(17), 2,
      sym_knot,
      aux_sym_program_repeat1,
  [262] = 2,
    ACTIONS(102), 1,
      sym_knot_start,
    ACTIONS(100), 2,
      aux_sym_program_token1,
      sym_stitch_start,
  [270] = 2,
    ACTIONS(106), 1,
      sym_knot_start,
    ACTIONS(104), 2,
      aux_sym_program_token1,
      sym_stitch_start,
  [278] = 2,
    ACTIONS(110), 1,
      sym_knot_start,
    ACTIONS(108), 2,
      aux_sym_program_token1,
      sym_stitch_start,
  [286] = 2,
    ACTIONS(66), 1,
      sym_knot_start,
    ACTIONS(112), 1,
      aux_sym_program_token1,
  [293] = 2,
    ACTIONS(114), 1,
      aux_sym_program_token1,
    ACTIONS(116), 1,
      sym_knot_start,
  [300] = 1,
    ACTIONS(118), 1,
      sym_identifier,
  [304] = 1,
    ACTIONS(120), 1,
      aux_sym_inline_logic_token1,
  [308] = 1,
    ACTIONS(122), 1,
      sym_identifier,
  [312] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [316] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [320] = 1,
    ACTIONS(128), 1,
      sym_identifier,
  [324] = 1,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
  [328] = 1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 218,
  [SMALL_STATE(15)] = 229,
  [SMALL_STATE(16)] = 240,
  [SMALL_STATE(17)] = 251,
  [SMALL_STATE(18)] = 262,
  [SMALL_STATE(19)] = 270,
  [SMALL_STATE(20)] = 278,
  [SMALL_STATE(21)] = 286,
  [SMALL_STATE(22)] = 293,
  [SMALL_STATE(23)] = 300,
  [SMALL_STATE(24)] = 304,
  [SMALL_STATE(25)] = 308,
  [SMALL_STATE(26)] = 312,
  [SMALL_STATE(27)] = 316,
  [SMALL_STATE(28)] = 320,
  [SMALL_STATE(29)] = 324,
  [SMALL_STATE(30)] = 328,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialog, 2, 0, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialog, 2, 0, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialog_repeat2, 2, 0, 4),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dialog_repeat2, 2, 0, 4), SHIFT_REPEAT(24),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialog_repeat2, 2, 0, 4), SHIFT_REPEAT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialog_repeat2, 2, 0, 4),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dialog_repeat2, 2, 0, 4), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_knot, 2, 0, 3), SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, 0, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialog_repeat2, 1, 0, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialog_repeat2, 1, 0, 1),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialog_repeat2, 1, 0, 1), SHIFT(6),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dialog_repeat2, 1, 0, 1), SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialog_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialog_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialog_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dialog_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_knot, 3, 0, 3), SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, 0, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_logic, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_logic, 3, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_body, 1, 0, 0), SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stitch, 2, 0, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, 0, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stitch, 3, 0, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 3, 0, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialog, 3, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialog, 3, 0, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divert, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_knot, 3, 0, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_knot, 4, 0, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 4, 0, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
