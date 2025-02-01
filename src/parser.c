#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_knot_header_token1 = 1,
  aux_sym_gather_mark_token1 = 2,
  aux_sym_choice_mark_token1 = 3,
  aux_sym_code_text_token1 = 4,
  aux_sym_arguments_token1 = 5,
  aux_sym_arguments_token2 = 6,
  aux_sym_arguments_token3 = 7,
  sym_other = 8,
  sym_vocabular = 9,
  sym_identifier = 10,
  sym_arrow = 11,
  sym_body_start = 12,
  sym_stitch_start = 13,
  sym_knot_start = 14,
  sym_function_start = 15,
  sym_line_end = 16,
  sym_program = 17,
  sym_knot = 18,
  sym_knot_header = 19,
  sym_stitch = 20,
  sym_stitch_header = 21,
  sym_weave_body = 22,
  sym_weave_body_line = 23,
  sym_function = 24,
  sym_gather_text = 25,
  sym_gather_mark = 26,
  sym_choice_text = 27,
  sym_choice_mark = 28,
  sym_code_text = 29,
  sym_dialog_text = 30,
  sym_text = 31,
  sym_divert = 32,
  sym_function_header = 33,
  sym_function_body = 34,
  sym_function_body_line = 35,
  sym_arguments = 36,
  aux_sym_program_repeat1 = 37,
  aux_sym_knot_repeat1 = 38,
  aux_sym_weave_body_repeat1 = 39,
  aux_sym_gather_mark_repeat1 = 40,
  aux_sym_choice_mark_repeat1 = 41,
  aux_sym_text_repeat1 = 42,
  aux_sym_function_body_repeat1 = 43,
  aux_sym_arguments_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_knot_header_token1] = "knot_header_token1",
  [aux_sym_gather_mark_token1] = "gather_mark_token1",
  [aux_sym_choice_mark_token1] = "choice_mark_token1",
  [aux_sym_code_text_token1] = "code_text_token1",
  [aux_sym_arguments_token1] = "arguments_token1",
  [aux_sym_arguments_token2] = "arguments_token2",
  [aux_sym_arguments_token3] = "arguments_token3",
  [sym_other] = "other",
  [sym_vocabular] = "vocabular",
  [sym_identifier] = "identifier",
  [sym_arrow] = "arrow",
  [sym_body_start] = "body_start",
  [sym_stitch_start] = "stitch_start",
  [sym_knot_start] = "knot_start",
  [sym_function_start] = "function_start",
  [sym_line_end] = "line_end",
  [sym_program] = "program",
  [sym_knot] = "knot",
  [sym_knot_header] = "knot_header",
  [sym_stitch] = "stitch",
  [sym_stitch_header] = "stitch_header",
  [sym_weave_body] = "weave_body",
  [sym_weave_body_line] = "weave_body_line",
  [sym_function] = "function",
  [sym_gather_text] = "gather_text",
  [sym_gather_mark] = "gather_mark",
  [sym_choice_text] = "choice_text",
  [sym_choice_mark] = "choice_mark",
  [sym_code_text] = "code_text",
  [sym_dialog_text] = "dialog_text",
  [sym_text] = "text",
  [sym_divert] = "divert",
  [sym_function_header] = "function_header",
  [sym_function_body] = "function_body",
  [sym_function_body_line] = "function_body_line",
  [sym_arguments] = "arguments",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_knot_repeat1] = "knot_repeat1",
  [aux_sym_weave_body_repeat1] = "weave_body_repeat1",
  [aux_sym_gather_mark_repeat1] = "gather_mark_repeat1",
  [aux_sym_choice_mark_repeat1] = "choice_mark_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_function_body_repeat1] = "function_body_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_knot_header_token1] = aux_sym_knot_header_token1,
  [aux_sym_gather_mark_token1] = aux_sym_gather_mark_token1,
  [aux_sym_choice_mark_token1] = aux_sym_choice_mark_token1,
  [aux_sym_code_text_token1] = aux_sym_code_text_token1,
  [aux_sym_arguments_token1] = aux_sym_arguments_token1,
  [aux_sym_arguments_token2] = aux_sym_arguments_token2,
  [aux_sym_arguments_token3] = aux_sym_arguments_token3,
  [sym_other] = sym_other,
  [sym_vocabular] = sym_vocabular,
  [sym_identifier] = sym_identifier,
  [sym_arrow] = sym_arrow,
  [sym_body_start] = sym_body_start,
  [sym_stitch_start] = sym_stitch_start,
  [sym_knot_start] = sym_knot_start,
  [sym_function_start] = sym_function_start,
  [sym_line_end] = sym_line_end,
  [sym_program] = sym_program,
  [sym_knot] = sym_knot,
  [sym_knot_header] = sym_knot_header,
  [sym_stitch] = sym_stitch,
  [sym_stitch_header] = sym_stitch_header,
  [sym_weave_body] = sym_weave_body,
  [sym_weave_body_line] = sym_weave_body_line,
  [sym_function] = sym_function,
  [sym_gather_text] = sym_gather_text,
  [sym_gather_mark] = sym_gather_mark,
  [sym_choice_text] = sym_choice_text,
  [sym_choice_mark] = sym_choice_mark,
  [sym_code_text] = sym_code_text,
  [sym_dialog_text] = sym_dialog_text,
  [sym_text] = sym_text,
  [sym_divert] = sym_divert,
  [sym_function_header] = sym_function_header,
  [sym_function_body] = sym_function_body,
  [sym_function_body_line] = sym_function_body_line,
  [sym_arguments] = sym_arguments,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_knot_repeat1] = aux_sym_knot_repeat1,
  [aux_sym_weave_body_repeat1] = aux_sym_weave_body_repeat1,
  [aux_sym_gather_mark_repeat1] = aux_sym_gather_mark_repeat1,
  [aux_sym_choice_mark_repeat1] = aux_sym_choice_mark_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_function_body_repeat1] = aux_sym_function_body_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_knot_header_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gather_mark_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_mark_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_other] = {
    .visible = true,
    .named = true,
  },
  [sym_vocabular] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
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
  [sym_function_start] = {
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
  [sym_knot_header] = {
    .visible = true,
    .named = true,
  },
  [sym_stitch] = {
    .visible = true,
    .named = true,
  },
  [sym_stitch_header] = {
    .visible = true,
    .named = true,
  },
  [sym_weave_body] = {
    .visible = true,
    .named = true,
  },
  [sym_weave_body_line] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_gather_text] = {
    .visible = true,
    .named = true,
  },
  [sym_gather_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_text] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_mark] = {
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
  [sym_divert] = {
    .visible = true,
    .named = true,
  },
  [sym_function_header] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body_line] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
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
  [aux_sym_weave_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gather_mark_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_mark_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
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
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 12,
  [20] = 13,
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 31,
  [41] = 28,
  [42] = 42,
  [43] = 32,
  [44] = 27,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
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
  [75] = 75,
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
  [88] = 67,
};

static TSCharacterRange extras_character_set_1[] = {
  {'\t', '\t'}, {0x0b, '\f'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f},
  {0x205f, 0x205f}, {0x3000, 0x3000},
};

static TSCharacterRange sym_other_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '@'}, {'[', '^'}, {'`', '`'}, {'{', 0xa9}, {0xab, 0xb4}, {0xb6, 0xb9},
  {0xbb, 0xbf}, {0xd7, 0xd7}, {0xf7, 0xf7}, {0x2c2, 0x2c5}, {0x2d2, 0x2df}, {0x2e5, 0x2eb}, {0x2ed, 0x2ed}, {0x2ef, 0x36f},
  {0x375, 0x375}, {0x378, 0x379}, {0x37e, 0x37e}, {0x380, 0x385}, {0x387, 0x387}, {0x38b, 0x38b}, {0x38d, 0x38d}, {0x3a2, 0x3a2},
  {0x3f6, 0x3f6}, {0x482, 0x489}, {0x530, 0x530}, {0x557, 0x558}, {0x55a, 0x55f}, {0x589, 0x5cf}, {0x5eb, 0x5ee}, {0x5f3, 0x61f},
  {0x64b, 0x66d}, {0x670, 0x670}, {0x6d4, 0x6d4}, {0x6d6, 0x6e4}, {0x6e7, 0x6ed}, {0x6f0, 0x6f9}, {0x6fd, 0x6fe}, {0x700, 0x70f},
  {0x711, 0x711}, {0x730, 0x74c}, {0x7a6, 0x7b0}, {0x7b2, 0x7c9}, {0x7eb, 0x7f3}, {0x7f6, 0x7f9}, {0x7fb, 0x7ff}, {0x816, 0x819},
  {0x81b, 0x823}, {0x825, 0x827}, {0x829, 0x83f}, {0x859, 0x85f}, {0x86b, 0x86f}, {0x888, 0x888}, {0x88f, 0x89f}, {0x8ca, 0x903},
  {0x93a, 0x93c}, {0x93e, 0x94f}, {0x951, 0x957}, {0x962, 0x970}, {0x981, 0x984}, {0x98d, 0x98e}, {0x991, 0x992}, {0x9a9, 0x9a9},
  {0x9b1, 0x9b1}, {0x9b3, 0x9b5}, {0x9ba, 0x9bc}, {0x9be, 0x9cd}, {0x9cf, 0x9db}, {0x9de, 0x9de}, {0x9e2, 0x9ef}, {0x9f2, 0x9fb},
  {0x9fd, 0xa04}, {0xa0b, 0xa0e}, {0xa11, 0xa12}, {0xa29, 0xa29}, {0xa31, 0xa31}, {0xa34, 0xa34}, {0xa37, 0xa37}, {0xa3a, 0xa58},
  {0xa5d, 0xa5d}, {0xa5f, 0xa71}, {0xa75, 0xa84}, {0xa8e, 0xa8e}, {0xa92, 0xa92}, {0xaa9, 0xaa9}, {0xab1, 0xab1}, {0xab4, 0xab4},
  {0xaba, 0xabc}, {0xabe, 0xacf}, {0xad1, 0xadf}, {0xae2, 0xaf8}, {0xafa, 0xb04}, {0xb0d, 0xb0e}, {0xb11, 0xb12}, {0xb29, 0xb29},
  {0xb31, 0xb31}, {0xb34, 0xb34}, {0xb3a, 0xb3c}, {0xb3e, 0xb5b}, {0xb5e, 0xb5e}, {0xb62, 0xb70}, {0xb72, 0xb82}, {0xb84, 0xb84},
  {0xb8b, 0xb8d}, {0xb91, 0xb91}, {0xb96, 0xb98}, {0xb9b, 0xb9b}, {0xb9d, 0xb9d}, {0xba0, 0xba2}, {0xba5, 0xba7}, {0xbab, 0xbad},
  {0xbba, 0xbcf}, {0xbd1, 0xc04}, {0xc0d, 0xc0d}, {0xc11, 0xc11}, {0xc29, 0xc29}, {0xc3a, 0xc3c}, {0xc3e, 0xc57}, {0xc5b, 0xc5c},
  {0xc5e, 0xc5f}, {0xc62, 0xc7f}, {0xc81, 0xc84}, {0xc8d, 0xc8d}, {0xc91, 0xc91}, {0xca9, 0xca9}, {0xcb4, 0xcb4}, {0xcba, 0xcbc},
  {0xcbe, 0xcdc}, {0xcdf, 0xcdf}, {0xce2, 0xcf0}, {0xcf3, 0xd03}, {0xd0d, 0xd0d}, {0xd11, 0xd11}, {0xd3b, 0xd3c}, {0xd3e, 0xd4d},
  {0xd4f, 0xd53}, {0xd57, 0xd5e}, {0xd62, 0xd79}, {0xd80, 0xd84}, {0xd97, 0xd99}, {0xdb2, 0xdb2}, {0xdbc, 0xdbc}, {0xdbe, 0xdbf},
  {0xdc7, 0xe00}, {0xe31, 0xe31}, {0xe34, 0xe3f}, {0xe47, 0xe80}, {0xe83, 0xe83}, {0xe85, 0xe85}, {0xe8b, 0xe8b}, {0xea4, 0xea4},
  {0xea6, 0xea6}, {0xeb1, 0xeb1}, {0xeb4, 0xebc}, {0xebe, 0xebf}, {0xec5, 0xec5}, {0xec7, 0xedb}, {0xee0, 0xeff}, {0xf01, 0xf3f},
  {0xf48, 0xf48}, {0xf6d, 0xf87}, {0xf8d, 0xfff}, {0x102b, 0x103e}, {0x1040, 0x104f}, {0x1056, 0x1059}, {0x105e, 0x1060}, {0x1062, 0x1064},
  {0x1067, 0x106d}, {0x1071, 0x1074}, {0x1082, 0x108d}, {0x108f, 0x109f}, {0x10c6, 0x10c6}, {0x10c8, 0x10cc}, {0x10ce, 0x10cf}, {0x10fb, 0x10fb},
  {0x1249, 0x1249}, {0x124e, 0x124f}, {0x1257, 0x1257}, {0x1259, 0x1259}, {0x125e, 0x125f}, {0x1289, 0x1289}, {0x128e, 0x128f}, {0x12b1, 0x12b1},
  {0x12b6, 0x12b7}, {0x12bf, 0x12bf}, {0x12c1, 0x12c1}, {0x12c6, 0x12c7}, {0x12d7, 0x12d7}, {0x1311, 0x1311}, {0x1316, 0x1317}, {0x135b, 0x137f},
  {0x1390, 0x139f}, {0x13f6, 0x13f7}, {0x13fe, 0x1400}, {0x166d, 0x166e}, {0x1680, 0x1680}, {0x169b, 0x169f}, {0x16eb, 0x16f0}, {0x16f9, 0x16ff},
  {0x1712, 0x171e}, {0x1732, 0x173f}, {0x1752, 0x175f}, {0x176d, 0x176d}, {0x1771, 0x177f}, {0x17b4, 0x17d6}, {0x17d8, 0x17db}, {0x17dd, 0x181f},
  {0x1879, 0x187f}, {0x1885, 0x1886}, {0x18a9, 0x18a9}, {0x18ab, 0x18af}, {0x18f6, 0x18ff}, {0x191f, 0x194f}, {0x196e, 0x196f}, {0x1975, 0x197f},
  {0x19ac, 0x19af}, {0x19ca, 0x19ff}, {0x1a17, 0x1a1f}, {0x1a55, 0x1aa6}, {0x1aa8, 0x1b04}, {0x1b34, 0x1b44}, {0x1b4d, 0x1b82}, {0x1ba1, 0x1bad},
  {0x1bb0, 0x1bb9}, {0x1be6, 0x1bff}, {0x1c24, 0x1c4c}, {0x1c50, 0x1c59}, {0x1c7e, 0x1c7f}, {0x1c89, 0x1c8f}, {0x1cbb, 0x1cbc}, {0x1cc0, 0x1ce8},
  {0x1ced, 0x1ced}, {0x1cf4, 0x1cf4}, {0x1cf7, 0x1cf9}, {0x1cfb, 0x1cff}, {0x1dc0, 0x1dff}, {0x1f16, 0x1f17}, {0x1f1e, 0x1f1f}, {0x1f46, 0x1f47},
  {0x1f4e, 0x1f4f}, {0x1f58, 0x1f58}, {0x1f5a, 0x1f5a}, {0x1f5c, 0x1f5c}, {0x1f5e, 0x1f5e}, {0x1f7e, 0x1f7f}, {0x1fb5, 0x1fb5}, {0x1fbd, 0x1fbd},
  {0x1fbf, 0x1fc1}, {0x1fc5, 0x1fc5}, {0x1fcd, 0x1fcf}, {0x1fd4, 0x1fd5}, {0x1fdc, 0x1fdf}, {0x1fed, 0x1ff1}, {0x1ff5, 0x1ff5}, {0x1ffd, 0x2070},
  {0x2072, 0x207e}, {0x2080, 0x208f}, {0x209d, 0x2101}, {0x2103, 0x2106}, {0x2108, 0x2109}, {0x2114, 0x2114}, {0x2116, 0x2118}, {0x211e, 0x2123},
  {0x2125, 0x2125}, {0x2127, 0x2127}, {0x2129, 0x2129}, {0x212e, 0x212e}, {0x213a, 0x213b}, {0x2140, 0x2144}, {0x214a, 0x214d}, {0x214f, 0x2182},
  {0x2185, 0x2bff}, {0x2ce5, 0x2cea}, {0x2cef, 0x2cf1}, {0x2cf4, 0x2cff}, {0x2d26, 0x2d26}, {0x2d28, 0x2d2c}, {0x2d2e, 0x2d2f}, {0x2d68, 0x2d6e},
  {0x2d70, 0x2d7f}, {0x2d97, 0x2d9f}, {0x2da7, 0x2da7}, {0x2daf, 0x2daf}, {0x2db7, 0x2db7}, {0x2dbf, 0x2dbf}, {0x2dc7, 0x2dc7}, {0x2dcf, 0x2dcf},
  {0x2dd7, 0x2dd7}, {0x2ddf, 0x2e2e}, {0x2e30, 0x3004}, {0x3007, 0x3030}, {0x3036, 0x303a}, {0x303d, 0x3040}, {0x3097, 0x309c}, {0x30a0, 0x30a0},
  {0x30fb, 0x30fb}, {0x3100, 0x3104}, {0x3130, 0x3130}, {0x318f, 0x319f}, {0x31c0, 0x31ef}, {0x3200, 0x33ff}, {0x3401, 0x4dbe}, {0x4dc0, 0x4dff},
  {0x4e01, 0x9ffe}, {0xa48d, 0xa4cf}, {0xa4fe, 0xa4ff}, {0xa60d, 0xa60f}, {0xa620, 0xa629}, {0xa62c, 0xa63f}, {0xa66f, 0xa67e}, {0xa69e, 0xa69f},
  {0xa6e6, 0xa716}, {0xa720, 0xa721}, {0xa789, 0xa78a}, {0xa7cb, 0xa7cf}, {0xa7d2, 0xa7d2}, {0xa7d4, 0xa7d4}, {0xa7da, 0xa7f1}, {0xa802, 0xa802},
  {0xa806, 0xa806}, {0xa80b, 0xa80b}, {0xa823, 0xa83f}, {0xa874, 0xa881}, {0xa8b4, 0xa8f1}, {0xa8f8, 0xa8fa}, {0xa8fc, 0xa8fc}, {0xa8ff, 0xa909},
  {0xa926, 0xa92f}, {0xa947, 0xa95f}, {0xa97d, 0xa983}, {0xa9b3, 0xa9ce}, {0xa9d0, 0xa9df}, {0xa9e5, 0xa9e5}, {0xa9f0, 0xa9f9}, {0xa9ff, 0xa9ff},
  {0xaa29, 0xaa3f}, {0xaa43, 0xaa43}, {0xaa4c, 0xaa5f}, {0xaa77, 0xaa79}, {0xaa7b, 0xaa7d}, {0xaab0, 0xaab0}, {0xaab2, 0xaab4}, {0xaab7, 0xaab8},
  {0xaabe, 0xaabf}, {0xaac1, 0xaac1}, {0xaac3, 0xaada}, {0xaade, 0xaadf}, {0xaaeb, 0xaaf1}, {0xaaf5, 0xab00}, {0xab07, 0xab08}, {0xab0f, 0xab10},
  {0xab17, 0xab1f}, {0xab27, 0xab27}, {0xab2f, 0xab2f}, {0xab5b, 0xab5b}, {0xab6a, 0xab6f}, {0xabe3, 0xabff}, {0xac01, 0xd7a2}, {0xd7a4, 0xd7af},
  {0xd7c7, 0xd7ca}, {0xd7fc, 0xf8ff}, {0xfa6e, 0xfa6f}, {0xfada, 0xfaff}, {0xfb07, 0xfb12}, {0xfb18, 0xfb1c}, {0xfb1e, 0xfb1e}, {0xfb29, 0xfb29},
  {0xfb37, 0xfb37}, {0xfb3d, 0xfb3d}, {0xfb3f, 0xfb3f}, {0xfb42, 0xfb42}, {0xfb45, 0xfb45}, {0xfbb2, 0xfbd2}, {0xfd3e, 0xfd4f}, {0xfd90, 0xfd91},
  {0xfdc8, 0xfdef}, {0xfdfc, 0xfe6f}, {0xfe75, 0xfe75}, {0xfefd, 0xff20}, {0xff3b, 0xff40}, {0xff5b, 0xff65}, {0xffbf, 0xffc1}, {0xffc8, 0xffc9},
  {0xffd0, 0xffd1}, {0xffd8, 0xffd9}, {0xffdd, 0xffff}, {0x1000c, 0x1000c}, {0x10027, 0x10027}, {0x1003b, 0x1003b}, {0x1003e, 0x1003e}, {0x1004e, 0x1004f},
  {0x1005e, 0x1007f}, {0x100fb, 0x1027f}, {0x1029d, 0x1029f}, {0x102d1, 0x102ff}, {0x10320, 0x1032c}, {0x10341, 0x10341}, {0x1034a, 0x1034f}, {0x10376, 0x1037f},
  {0x1039e, 0x1039f}, {0x103c4, 0x103c7}, {0x103d0, 0x103ff}, {0x1049e, 0x104af}, {0x104d4, 0x104d7}, {0x104fc, 0x104ff}, {0x10528, 0x1052f}, {0x10564, 0x1056f},
  {0x1057b, 0x1057b}, {0x1058b, 0x1058b}, {0x10593, 0x10593}, {0x10596, 0x10596}, {0x105a2, 0x105a2}, {0x105b2, 0x105b2}, {0x105ba, 0x105ba}, {0x105bd, 0x105ff},
  {0x10737, 0x1073f}, {0x10756, 0x1075f}, {0x10768, 0x1077f}, {0x10786, 0x10786}, {0x107b1, 0x107b1}, {0x107bb, 0x107ff}, {0x10806, 0x10807}, {0x10809, 0x10809},
  {0x10836, 0x10836}, {0x10839, 0x1083b}, {0x1083d, 0x1083e}, {0x10856, 0x1085f}, {0x10877, 0x1087f}, {0x1089f, 0x108df}, {0x108f3, 0x108f3}, {0x108f6, 0x108ff},
  {0x10916, 0x10ffff},
};

static TSCharacterRange sym_vocabular_character_set_1[] = {
  {'-', '-'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6},
  {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377},
  {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481},
  {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f},
  {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f},
  {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824},
  {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d},
  {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2},
  {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a},
  {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e},
  {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd},
  {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33},
  {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90},
  {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0},
  {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61},
  {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde},
  {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56},
  {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30},
  {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0},
  {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c},
  {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070},
  {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5},
  {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731},
  {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884},
  {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9},
  {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5},
  {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3},
  {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57},
  {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4},
  {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f},
  {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4},
  {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96},
  {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde},
  {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff},
  {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c},
  {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f},
  {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a},
  {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946},
  {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42},
  {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0},
  {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26},
  {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb},
  {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c},
  {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb},
  {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7},
  {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa},
  {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3},
  {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a},
  {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755},
  {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838},
  {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange sym_identifier_character_set_1[] = {
  {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6},
  {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d},
  {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f},
  {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3},
  {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5},
  {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828},
  {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950},
  {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9},
  {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10},
  {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74},
  {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0},
  {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39},
  {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95},
  {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80},
  {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1},
  {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61},
  {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33},
  {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3},
  {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256},
  {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0},
  {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd},
  {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751},
  {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8},
  {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16},
  {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c},
  {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128},
  {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee},
  {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6},
  {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f},
  {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f},
  {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd},
  {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788},
  {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822},
  {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c},
  {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b},
  {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2},
  {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e},
  {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d},
  {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e},
  {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74},
  {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc},
  {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c},
  {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf},
  {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592},
  {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767},
  {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c},
  {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(11);
      if (set_contains(extras_character_set_1, 10, lookahead)) SKIP(0);
      if (set_contains(sym_identifier_character_set_1, 430, lookahead)) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == '=') ADVANCE(8);
      if (set_contains(extras_character_set_1, 10, lookahead)) SKIP(1);
      if (set_contains(sym_identifier_character_set_1, 430, lookahead)) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(18);
      if (set_contains(sym_identifier_character_set_1, 430, lookahead)) ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(3);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(19);
      if (set_contains(sym_identifier_character_set_1, 430, lookahead)) ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(20);
      if (set_contains(sym_identifier_character_set_1, 430, lookahead)) ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(21);
      if (set_contains(sym_identifier_character_set_1, 430, lookahead)) ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(6);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(22);
      if (set_contains(sym_identifier_character_set_1, 430, lookahead)) ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(24);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_knot_header_token1);
      if (lookahead == '=') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_gather_mark_token1);
      if (lookahead == '-') ADVANCE(23);
      if (set_contains(sym_identifier_character_set_1, 430, lookahead)) ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(24);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_gather_mark_token1);
      if (set_contains(sym_vocabular_character_set_1, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_choice_mark_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_choice_mark_token1);
      if ((!eof && set_contains(sym_other_character_set_1, 433, lookahead))) ADVANCE(24);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_code_text_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_code_text_token1);
      if ((!eof && set_contains(sym_other_character_set_1, 433, lookahead))) ADVANCE(24);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_arguments_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_arguments_token2);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_arguments_token3);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_other);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(12);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(18);
      if ((!eof && set_contains(sym_other_character_set_1, 433, lookahead))) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_other);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(19);
      if ((!eof && set_contains(sym_other_character_set_1, 433, lookahead))) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_other);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(20);
      if ((!eof && set_contains(sym_other_character_set_1, 433, lookahead))) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_other);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(12);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(21);
      if ((!eof && set_contains(sym_other_character_set_1, 433, lookahead))) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_other);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(22);
      if ((!eof && set_contains(sym_other_character_set_1, 433, lookahead))) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_other);
      if (lookahead == '-') ADVANCE(23);
      if (set_contains(sym_identifier_character_set_1, 430, lookahead)) ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_other);
      if ((!eof && set_contains(sym_other_character_set_1, 433, lookahead))) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_vocabular);
      if (lookahead == '-') ADVANCE(26);
      if (set_contains(sym_identifier_character_set_1, 430, lookahead)) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_vocabular);
      if (set_contains(sym_vocabular_character_set_1, 431, lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_identifier_character_set_1, 430, lookahead)) ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 3},
  [3] = {.lex_state = 2, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 4},
  [5] = {.lex_state = 4, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 5},
  [7] = {.lex_state = 6, .external_lex_state = 3},
  [8] = {.lex_state = 6, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 5},
  [10] = {.lex_state = 0, .external_lex_state = 5},
  [11] = {.lex_state = 0, .external_lex_state = 5},
  [12] = {.lex_state = 0, .external_lex_state = 4},
  [13] = {.lex_state = 0, .external_lex_state = 4},
  [14] = {.lex_state = 0, .external_lex_state = 6},
  [15] = {.lex_state = 0, .external_lex_state = 6},
  [16] = {.lex_state = 0, .external_lex_state = 6},
  [17] = {.lex_state = 0, .external_lex_state = 6},
  [18] = {.lex_state = 5, .external_lex_state = 3},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 3, .external_lex_state = 3},
  [22] = {.lex_state = 5, .external_lex_state = 3},
  [23] = {.lex_state = 3, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 4},
  [27] = {.lex_state = 6, .external_lex_state = 3},
  [28] = {.lex_state = 6, .external_lex_state = 3},
  [29] = {.lex_state = 0, .external_lex_state = 4},
  [30] = {.lex_state = 0, .external_lex_state = 4},
  [31] = {.lex_state = 0, .external_lex_state = 4},
  [32] = {.lex_state = 0, .external_lex_state = 4},
  [33] = {.lex_state = 0, .external_lex_state = 7},
  [34] = {.lex_state = 0, .external_lex_state = 8},
  [35] = {.lex_state = 0, .external_lex_state = 6},
  [36] = {.lex_state = 0, .external_lex_state = 7},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 8},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 6, .external_lex_state = 8},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 6, .external_lex_state = 8},
  [45] = {.lex_state = 0, .external_lex_state = 5},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0, .external_lex_state = 8},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0, .external_lex_state = 8},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0, .external_lex_state = 8},
  [56] = {.lex_state = 0, .external_lex_state = 8},
  [57] = {.lex_state = 0, .external_lex_state = 8},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0, .external_lex_state = 8},
  [60] = {.lex_state = 0, .external_lex_state = 8},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0, .external_lex_state = 8},
  [63] = {.lex_state = 0, .external_lex_state = 8},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0, .external_lex_state = 8},
  [66] = {.lex_state = 0, .external_lex_state = 7},
  [67] = {.lex_state = 0, .external_lex_state = 8},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 7},
  [70] = {.lex_state = 0, .external_lex_state = 8},
  [71] = {.lex_state = 0, .external_lex_state = 8},
  [72] = {.lex_state = 0, .external_lex_state = 8},
  [73] = {.lex_state = 0, .external_lex_state = 8},
  [74] = {.lex_state = 0, .external_lex_state = 7},
  [75] = {.lex_state = 0, .external_lex_state = 8},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0, .external_lex_state = 8},
  [78] = {.lex_state = 0, .external_lex_state = 8},
  [79] = {.lex_state = 0, .external_lex_state = 8},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 8},
  [84] = {.lex_state = 0, .external_lex_state = 7},
  [85] = {.lex_state = 0, .external_lex_state = 7},
  [86] = {.lex_state = 0, .external_lex_state = 8},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_knot_header_token1] = ACTIONS(1),
    [aux_sym_gather_mark_token1] = ACTIONS(1),
    [aux_sym_choice_mark_token1] = ACTIONS(1),
    [aux_sym_code_text_token1] = ACTIONS(1),
    [aux_sym_arguments_token1] = ACTIONS(1),
    [aux_sym_arguments_token2] = ACTIONS(1),
    [aux_sym_arguments_token3] = ACTIONS(1),
    [sym_vocabular] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_body_start] = ACTIONS(1),
    [sym_stitch_start] = ACTIONS(1),
    [sym_knot_start] = ACTIONS(1),
    [sym_function_start] = ACTIONS(1),
    [sym_line_end] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(76),
    [sym_knot] = STATE(10),
    [sym_knot_header] = STATE(4),
    [sym_weave_body] = STATE(6),
    [sym_weave_body_line] = STATE(19),
    [sym_function] = STATE(10),
    [sym_function_header] = STATE(33),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_weave_body_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_body_start] = ACTIONS(5),
    [sym_knot_start] = ACTIONS(7),
    [sym_function_start] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(11), 1,
      aux_sym_gather_mark_token1,
    ACTIONS(13), 1,
      aux_sym_choice_mark_token1,
    ACTIONS(15), 1,
      aux_sym_code_text_token1,
    ACTIONS(19), 1,
      sym_arrow,
    ACTIONS(21), 1,
      sym_line_end,
    STATE(7), 1,
      sym_gather_mark,
    STATE(8), 1,
      sym_choice_mark,
    STATE(18), 1,
      aux_sym_choice_mark_repeat1,
    STATE(23), 1,
      aux_sym_gather_mark_repeat1,
    STATE(28), 1,
      aux_sym_text_repeat1,
    STATE(46), 1,
      sym_text,
    STATE(77), 1,
      sym_divert,
    ACTIONS(17), 2,
      sym_other,
      sym_vocabular,
    STATE(67), 4,
      sym_gather_text,
      sym_choice_text,
      sym_code_text,
      sym_dialog_text,
  [47] = 14,
    ACTIONS(11), 1,
      aux_sym_gather_mark_token1,
    ACTIONS(13), 1,
      aux_sym_choice_mark_token1,
    ACTIONS(15), 1,
      aux_sym_code_text_token1,
    ACTIONS(19), 1,
      sym_arrow,
    ACTIONS(23), 1,
      sym_line_end,
    STATE(7), 1,
      sym_gather_mark,
    STATE(8), 1,
      sym_choice_mark,
    STATE(18), 1,
      aux_sym_choice_mark_repeat1,
    STATE(23), 1,
      aux_sym_gather_mark_repeat1,
    STATE(28), 1,
      aux_sym_text_repeat1,
    STATE(46), 1,
      sym_text,
    STATE(77), 1,
      sym_divert,
    ACTIONS(17), 2,
      sym_other,
      sym_vocabular,
    STATE(88), 4,
      sym_gather_text,
      sym_choice_text,
      sym_code_text,
      sym_dialog_text,
  [94] = 7,
    ACTIONS(27), 1,
      sym_body_start,
    ACTIONS(29), 1,
      sym_stitch_start,
    STATE(15), 1,
      sym_weave_body,
    STATE(36), 1,
      sym_stitch_header,
    STATE(12), 2,
      sym_weave_body_line,
      aux_sym_weave_body_repeat1,
    STATE(16), 2,
      sym_stitch,
      aux_sym_knot_repeat1,
    ACTIONS(25), 3,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [120] = 8,
    ACTIONS(15), 1,
      aux_sym_code_text_token1,
    ACTIONS(19), 1,
      sym_arrow,
    ACTIONS(31), 1,
      sym_line_end,
    STATE(28), 1,
      aux_sym_text_repeat1,
    STATE(46), 1,
      sym_text,
    STATE(77), 1,
      sym_divert,
    ACTIONS(17), 2,
      sym_other,
      sym_vocabular,
    STATE(75), 2,
      sym_code_text,
      sym_dialog_text,
  [147] = 6,
    ACTIONS(7), 1,
      sym_knot_start,
    ACTIONS(9), 1,
      sym_function_start,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_knot_header,
    STATE(33), 1,
      sym_function_header,
    STATE(9), 3,
      sym_knot,
      sym_function,
      aux_sym_program_repeat1,
  [168] = 7,
    ACTIONS(19), 1,
      sym_arrow,
    ACTIONS(35), 1,
      sym_line_end,
    STATE(28), 1,
      aux_sym_text_repeat1,
    STATE(46), 1,
      sym_text,
    STATE(77), 1,
      sym_divert,
    STATE(78), 1,
      sym_dialog_text,
    ACTIONS(17), 2,
      sym_other,
      sym_vocabular,
  [191] = 7,
    ACTIONS(19), 1,
      sym_arrow,
    ACTIONS(37), 1,
      sym_line_end,
    STATE(28), 1,
      aux_sym_text_repeat1,
    STATE(46), 1,
      sym_text,
    STATE(65), 1,
      sym_dialog_text,
    STATE(77), 1,
      sym_divert,
    ACTIONS(17), 2,
      sym_other,
      sym_vocabular,
  [214] = 6,
    ACTIONS(7), 1,
      sym_knot_start,
    ACTIONS(9), 1,
      sym_function_start,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_knot_header,
    STATE(33), 1,
      sym_function_header,
    STATE(11), 3,
      sym_knot,
      sym_function,
      aux_sym_program_repeat1,
  [235] = 6,
    ACTIONS(7), 1,
      sym_knot_start,
    ACTIONS(9), 1,
      sym_function_start,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_knot_header,
    STATE(33), 1,
      sym_function_header,
    STATE(11), 3,
      sym_knot,
      sym_function,
      aux_sym_program_repeat1,
  [256] = 6,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_knot_start,
    ACTIONS(46), 1,
      sym_function_start,
    STATE(4), 1,
      sym_knot_header,
    STATE(33), 1,
      sym_function_header,
    STATE(11), 3,
      sym_knot,
      sym_function,
      aux_sym_program_repeat1,
  [277] = 3,
    ACTIONS(27), 1,
      sym_body_start,
    STATE(13), 2,
      sym_weave_body_line,
      aux_sym_weave_body_repeat1,
    ACTIONS(49), 4,
      sym_stitch_start,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [291] = 3,
    ACTIONS(53), 1,
      sym_body_start,
    STATE(13), 2,
      sym_weave_body_line,
      aux_sym_weave_body_repeat1,
    ACTIONS(51), 4,
      sym_stitch_start,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [305] = 4,
    ACTIONS(29), 1,
      sym_stitch_start,
    STATE(36), 1,
      sym_stitch_header,
    STATE(17), 2,
      sym_stitch,
      aux_sym_knot_repeat1,
    ACTIONS(56), 3,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [321] = 4,
    ACTIONS(29), 1,
      sym_stitch_start,
    STATE(36), 1,
      sym_stitch_header,
    STATE(14), 2,
      sym_stitch,
      aux_sym_knot_repeat1,
    ACTIONS(58), 3,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [337] = 4,
    ACTIONS(29), 1,
      sym_stitch_start,
    STATE(36), 1,
      sym_stitch_header,
    STATE(17), 2,
      sym_stitch,
      aux_sym_knot_repeat1,
    ACTIONS(58), 3,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [353] = 4,
    ACTIONS(62), 1,
      sym_stitch_start,
    STATE(36), 1,
      sym_stitch_header,
    STATE(17), 2,
      sym_stitch,
      aux_sym_knot_repeat1,
    ACTIONS(60), 3,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [369] = 4,
    ACTIONS(65), 1,
      aux_sym_choice_mark_token1,
    STATE(22), 1,
      aux_sym_choice_mark_repeat1,
    ACTIONS(67), 2,
      sym_other,
      sym_vocabular,
    ACTIONS(69), 2,
      sym_arrow,
      sym_line_end,
  [384] = 3,
    ACTIONS(5), 1,
      sym_body_start,
    STATE(20), 2,
      sym_weave_body_line,
      aux_sym_weave_body_repeat1,
    ACTIONS(49), 3,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [397] = 3,
    ACTIONS(71), 1,
      sym_body_start,
    STATE(20), 2,
      sym_weave_body_line,
      aux_sym_weave_body_repeat1,
    ACTIONS(51), 3,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [410] = 4,
    ACTIONS(74), 1,
      aux_sym_gather_mark_token1,
    STATE(21), 1,
      aux_sym_gather_mark_repeat1,
    ACTIONS(77), 2,
      sym_other,
      sym_vocabular,
    ACTIONS(79), 2,
      sym_arrow,
      sym_line_end,
  [425] = 4,
    ACTIONS(81), 1,
      aux_sym_choice_mark_token1,
    STATE(22), 1,
      aux_sym_choice_mark_repeat1,
    ACTIONS(84), 2,
      sym_other,
      sym_vocabular,
    ACTIONS(86), 2,
      sym_arrow,
      sym_line_end,
  [440] = 4,
    ACTIONS(88), 1,
      aux_sym_gather_mark_token1,
    STATE(21), 1,
      aux_sym_gather_mark_repeat1,
    ACTIONS(90), 2,
      sym_other,
      sym_vocabular,
    ACTIONS(92), 2,
      sym_arrow,
      sym_line_end,
  [455] = 3,
    ACTIONS(96), 1,
      sym_body_start,
    STATE(25), 2,
      sym_function_body_line,
      aux_sym_function_body_repeat1,
    ACTIONS(94), 3,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [468] = 3,
    ACTIONS(100), 1,
      sym_body_start,
    STATE(25), 2,
      sym_function_body_line,
      aux_sym_function_body_repeat1,
    ACTIONS(98), 3,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [481] = 1,
    ACTIONS(103), 5,
      sym_body_start,
      sym_stitch_start,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [489] = 3,
    STATE(27), 1,
      aux_sym_text_repeat1,
    ACTIONS(105), 2,
      sym_other,
      sym_vocabular,
    ACTIONS(108), 2,
      sym_arrow,
      sym_line_end,
  [501] = 3,
    STATE(27), 1,
      aux_sym_text_repeat1,
    ACTIONS(110), 2,
      sym_other,
      sym_vocabular,
    ACTIONS(112), 2,
      sym_arrow,
      sym_line_end,
  [513] = 1,
    ACTIONS(114), 5,
      sym_body_start,
      sym_stitch_start,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [521] = 1,
    ACTIONS(116), 5,
      sym_body_start,
      sym_stitch_start,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [529] = 1,
    ACTIONS(118), 5,
      sym_body_start,
      sym_stitch_start,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [537] = 1,
    ACTIONS(120), 5,
      sym_body_start,
      sym_stitch_start,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [545] = 3,
    ACTIONS(96), 1,
      sym_body_start,
    STATE(45), 1,
      sym_function_body,
    STATE(24), 2,
      sym_function_body_line,
      aux_sym_function_body_repeat1,
  [556] = 4,
    ACTIONS(122), 1,
      aux_sym_knot_header_token1,
    ACTIONS(124), 1,
      aux_sym_arguments_token1,
    ACTIONS(126), 1,
      sym_line_end,
    STATE(53), 1,
      sym_arguments,
  [569] = 1,
    ACTIONS(128), 4,
      sym_stitch_start,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [576] = 3,
    ACTIONS(27), 1,
      sym_body_start,
    STATE(35), 1,
      sym_weave_body,
    STATE(12), 2,
      sym_weave_body_line,
      aux_sym_weave_body_repeat1,
  [587] = 1,
    ACTIONS(130), 4,
      sym_body_start,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [594] = 4,
    ACTIONS(124), 1,
      aux_sym_arguments_token1,
    ACTIONS(132), 1,
      aux_sym_knot_header_token1,
    ACTIONS(134), 1,
      sym_line_end,
    STATE(51), 1,
      sym_arguments,
  [607] = 1,
    ACTIONS(136), 4,
      sym_body_start,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [614] = 1,
    ACTIONS(118), 4,
      sym_body_start,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [621] = 3,
    ACTIONS(112), 1,
      sym_line_end,
    STATE(44), 1,
      aux_sym_text_repeat1,
    ACTIONS(138), 2,
      sym_other,
      sym_vocabular,
  [632] = 3,
    STATE(41), 1,
      aux_sym_text_repeat1,
    STATE(73), 1,
      sym_text,
    ACTIONS(140), 2,
      sym_other,
      sym_vocabular,
  [643] = 1,
    ACTIONS(120), 4,
      sym_body_start,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [650] = 3,
    ACTIONS(108), 1,
      sym_line_end,
    STATE(44), 1,
      aux_sym_text_repeat1,
    ACTIONS(142), 2,
      sym_other,
      sym_vocabular,
  [661] = 1,
    ACTIONS(145), 3,
      sym_knot_start,
      sym_function_start,
      ts_builtin_sym_end,
  [667] = 3,
    ACTIONS(19), 1,
      sym_arrow,
    ACTIONS(147), 1,
      sym_line_end,
    STATE(62), 1,
      sym_divert,
  [677] = 3,
    ACTIONS(149), 1,
      aux_sym_arguments_token2,
    ACTIONS(152), 1,
      aux_sym_arguments_token3,
    STATE(47), 1,
      aux_sym_arguments_repeat1,
  [687] = 3,
    ACTIONS(154), 1,
      aux_sym_arguments_token2,
    ACTIONS(156), 1,
      aux_sym_arguments_token3,
    STATE(49), 1,
      aux_sym_arguments_repeat1,
  [697] = 3,
    ACTIONS(158), 1,
      aux_sym_arguments_token2,
    ACTIONS(160), 1,
      aux_sym_arguments_token3,
    STATE(47), 1,
      aux_sym_arguments_repeat1,
  [707] = 1,
    ACTIONS(152), 2,
      aux_sym_arguments_token2,
      aux_sym_arguments_token3,
  [712] = 2,
    ACTIONS(122), 1,
      aux_sym_knot_header_token1,
    ACTIONS(126), 1,
      sym_line_end,
  [719] = 2,
    ACTIONS(162), 1,
      aux_sym_knot_header_token1,
    ACTIONS(164), 1,
      sym_identifier,
  [726] = 2,
    ACTIONS(166), 1,
      aux_sym_knot_header_token1,
    ACTIONS(168), 1,
      sym_line_end,
  [733] = 2,
    ACTIONS(160), 1,
      aux_sym_arguments_token3,
    ACTIONS(170), 1,
      sym_identifier,
  [740] = 1,
    ACTIONS(172), 2,
      sym_line_end,
      aux_sym_knot_header_token1,
  [745] = 2,
    ACTIONS(174), 1,
      aux_sym_knot_header_token1,
    ACTIONS(176), 1,
      sym_line_end,
  [752] = 1,
    ACTIONS(178), 2,
      sym_line_end,
      aux_sym_knot_header_token1,
  [757] = 2,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(180), 1,
      aux_sym_arguments_token3,
  [764] = 2,
    ACTIONS(182), 1,
      aux_sym_knot_header_token1,
    ACTIONS(184), 1,
      sym_line_end,
  [771] = 1,
    ACTIONS(186), 2,
      sym_line_end,
      aux_sym_knot_header_token1,
  [776] = 2,
    ACTIONS(188), 1,
      aux_sym_knot_header_token1,
    ACTIONS(190), 1,
      sym_identifier,
  [783] = 1,
    ACTIONS(192), 1,
      sym_line_end,
  [787] = 1,
    ACTIONS(168), 1,
      sym_line_end,
  [791] = 1,
    ACTIONS(194), 1,
      sym_identifier,
  [795] = 1,
    ACTIONS(196), 1,
      sym_line_end,
  [799] = 1,
    ACTIONS(198), 1,
      sym_body_start,
  [803] = 1,
    ACTIONS(200), 1,
      sym_line_end,
  [807] = 1,
    ACTIONS(202), 1,
      sym_identifier,
  [811] = 1,
    ACTIONS(204), 1,
      sym_body_start,
  [815] = 1,
    ACTIONS(206), 1,
      sym_line_end,
  [819] = 1,
    ACTIONS(208), 1,
      sym_line_end,
  [823] = 1,
    ACTIONS(210), 1,
      sym_line_end,
  [827] = 1,
    ACTIONS(212), 1,
      sym_line_end,
  [831] = 1,
    ACTIONS(214), 1,
      sym_body_start,
  [835] = 1,
    ACTIONS(216), 1,
      sym_line_end,
  [839] = 1,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
  [843] = 1,
    ACTIONS(147), 1,
      sym_line_end,
  [847] = 1,
    ACTIONS(220), 1,
      sym_line_end,
  [851] = 1,
    ACTIONS(222), 1,
      sym_line_end,
  [855] = 1,
    ACTIONS(170), 1,
      sym_identifier,
  [859] = 1,
    ACTIONS(224), 1,
      sym_identifier,
  [863] = 1,
    ACTIONS(226), 1,
      sym_identifier,
  [867] = 1,
    ACTIONS(184), 1,
      sym_line_end,
  [871] = 1,
    ACTIONS(228), 1,
      sym_body_start,
  [875] = 1,
    ACTIONS(230), 1,
      sym_body_start,
  [879] = 1,
    ACTIONS(126), 1,
      sym_line_end,
  [883] = 1,
    ACTIONS(232), 1,
      sym_identifier,
  [887] = 1,
    ACTIONS(234), 1,
      sym_line_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 147,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 191,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 235,
  [SMALL_STATE(11)] = 256,
  [SMALL_STATE(12)] = 277,
  [SMALL_STATE(13)] = 291,
  [SMALL_STATE(14)] = 305,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 337,
  [SMALL_STATE(17)] = 353,
  [SMALL_STATE(18)] = 369,
  [SMALL_STATE(19)] = 384,
  [SMALL_STATE(20)] = 397,
  [SMALL_STATE(21)] = 410,
  [SMALL_STATE(22)] = 425,
  [SMALL_STATE(23)] = 440,
  [SMALL_STATE(24)] = 455,
  [SMALL_STATE(25)] = 468,
  [SMALL_STATE(26)] = 481,
  [SMALL_STATE(27)] = 489,
  [SMALL_STATE(28)] = 501,
  [SMALL_STATE(29)] = 513,
  [SMALL_STATE(30)] = 521,
  [SMALL_STATE(31)] = 529,
  [SMALL_STATE(32)] = 537,
  [SMALL_STATE(33)] = 545,
  [SMALL_STATE(34)] = 556,
  [SMALL_STATE(35)] = 569,
  [SMALL_STATE(36)] = 576,
  [SMALL_STATE(37)] = 587,
  [SMALL_STATE(38)] = 594,
  [SMALL_STATE(39)] = 607,
  [SMALL_STATE(40)] = 614,
  [SMALL_STATE(41)] = 621,
  [SMALL_STATE(42)] = 632,
  [SMALL_STATE(43)] = 643,
  [SMALL_STATE(44)] = 650,
  [SMALL_STATE(45)] = 661,
  [SMALL_STATE(46)] = 667,
  [SMALL_STATE(47)] = 677,
  [SMALL_STATE(48)] = 687,
  [SMALL_STATE(49)] = 697,
  [SMALL_STATE(50)] = 707,
  [SMALL_STATE(51)] = 712,
  [SMALL_STATE(52)] = 719,
  [SMALL_STATE(53)] = 726,
  [SMALL_STATE(54)] = 733,
  [SMALL_STATE(55)] = 740,
  [SMALL_STATE(56)] = 745,
  [SMALL_STATE(57)] = 752,
  [SMALL_STATE(58)] = 757,
  [SMALL_STATE(59)] = 764,
  [SMALL_STATE(60)] = 771,
  [SMALL_STATE(61)] = 776,
  [SMALL_STATE(62)] = 783,
  [SMALL_STATE(63)] = 787,
  [SMALL_STATE(64)] = 791,
  [SMALL_STATE(65)] = 795,
  [SMALL_STATE(66)] = 799,
  [SMALL_STATE(67)] = 803,
  [SMALL_STATE(68)] = 807,
  [SMALL_STATE(69)] = 811,
  [SMALL_STATE(70)] = 815,
  [SMALL_STATE(71)] = 819,
  [SMALL_STATE(72)] = 823,
  [SMALL_STATE(73)] = 827,
  [SMALL_STATE(74)] = 831,
  [SMALL_STATE(75)] = 835,
  [SMALL_STATE(76)] = 839,
  [SMALL_STATE(77)] = 843,
  [SMALL_STATE(78)] = 847,
  [SMALL_STATE(79)] = 851,
  [SMALL_STATE(80)] = 855,
  [SMALL_STATE(81)] = 859,
  [SMALL_STATE(82)] = 863,
  [SMALL_STATE(83)] = 867,
  [SMALL_STATE(84)] = 871,
  [SMALL_STATE(85)] = 875,
  [SMALL_STATE(86)] = 879,
  [SMALL_STATE(87)] = 883,
  [SMALL_STATE(88)] = 887,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_text, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_weave_body, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_weave_body_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_weave_body_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_knot_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_knot_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_mark, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_mark, 1, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_weave_body_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gather_mark_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gather_mark_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gather_mark_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_choice_mark_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_mark_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_mark_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gather_mark, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_mark, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_header, 5, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_header, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_knot_header, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_weave_body_line, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_weave_body_line, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_line, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_line, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialog_text, 1, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialog_text, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_text, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stitch_header, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 5, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_text, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 6, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [218] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gather_text, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_arrow = 0,
  ts_external_token_body_start = 1,
  ts_external_token_stitch_start = 2,
  ts_external_token_knot_start = 3,
  ts_external_token_function_start = 4,
  ts_external_token_line_end = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_arrow] = sym_arrow,
  [ts_external_token_body_start] = sym_body_start,
  [ts_external_token_stitch_start] = sym_stitch_start,
  [ts_external_token_knot_start] = sym_knot_start,
  [ts_external_token_function_start] = sym_function_start,
  [ts_external_token_line_end] = sym_line_end,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_arrow] = true,
    [ts_external_token_body_start] = true,
    [ts_external_token_stitch_start] = true,
    [ts_external_token_knot_start] = true,
    [ts_external_token_function_start] = true,
    [ts_external_token_line_end] = true,
  },
  [2] = {
    [ts_external_token_body_start] = true,
    [ts_external_token_knot_start] = true,
    [ts_external_token_function_start] = true,
  },
  [3] = {
    [ts_external_token_arrow] = true,
    [ts_external_token_line_end] = true,
  },
  [4] = {
    [ts_external_token_body_start] = true,
    [ts_external_token_stitch_start] = true,
    [ts_external_token_knot_start] = true,
    [ts_external_token_function_start] = true,
  },
  [5] = {
    [ts_external_token_knot_start] = true,
    [ts_external_token_function_start] = true,
  },
  [6] = {
    [ts_external_token_stitch_start] = true,
    [ts_external_token_knot_start] = true,
    [ts_external_token_function_start] = true,
  },
  [7] = {
    [ts_external_token_body_start] = true,
  },
  [8] = {
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
