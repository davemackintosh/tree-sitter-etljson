#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_content_token1 = 8,
  sym_escape_sequence = 9,
  sym_number = 10,
  sym_true = 11,
  sym_false = 12,
  sym_null = 13,
  sym_comment = 14,
  anon_sym_LBRACE2 = 15,
  anon_sym_bool = 16,
  anon_sym_string = 17,
  anon_sym_float = 18,
  anon_sym_int = 19,
  anon_sym_datetime = 20,
  anon_sym_import = 21,
  anon_sym_LBRACK_RBRACK = 22,
  anon_sym_map = 23,
  anon_sym_filter = 24,
  anon_sym_reduce = 25,
  anon_sym_sort = 26,
  anon_sym_ = 27,
  anon_sym_DOT = 28,
  aux_sym_identifier_token1 = 29,
  anon_sym_in = 30,
  anon_sym_as = 31,
  sym_document = 32,
  sym__value = 33,
  sym_object = 34,
  sym_pair = 35,
  sym_array = 36,
  sym_string = 37,
  sym_string_content = 38,
  sym_callbackObject = 39,
  sym_type = 40,
  sym_importFun = 41,
  sym_importStatement = 42,
  sym_func = 43,
  sym_funcExpr = 44,
  sym_typeExpr = 45,
  sym_valExpr = 46,
  sym_expr = 47,
  sym_identifier = 48,
  sym_keyword = 49,
  sym_callbackIdentifier = 50,
  aux_sym_object_repeat1 = 51,
  aux_sym_array_repeat1 = 52,
  aux_sym_string_content_repeat1 = 53,
  aux_sym_identifier_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [anon_sym_LBRACE2] = "{ ",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_float] = "float",
  [anon_sym_int] = "int",
  [anon_sym_datetime] = "datetime",
  [anon_sym_import] = "import",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_map] = "map",
  [anon_sym_filter] = "filter",
  [anon_sym_reduce] = "reduce",
  [anon_sym_sort] = "sort",
  [anon_sym_] = " ",
  [anon_sym_DOT] = ".",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_in] = "in",
  [anon_sym_as] = "as",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_callbackObject] = "callbackObject",
  [sym_type] = "type",
  [sym_importFun] = "importFun",
  [sym_importStatement] = "importStatement",
  [sym_func] = "func",
  [sym_funcExpr] = "funcExpr",
  [sym_typeExpr] = "typeExpr",
  [sym_valExpr] = "valExpr",
  [sym_expr] = "expr",
  [sym_identifier] = "identifier",
  [sym_keyword] = "keyword",
  [sym_callbackIdentifier] = "callbackIdentifier",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE2] = anon_sym_LBRACE2,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_reduce] = anon_sym_reduce,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_] = anon_sym_,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_as] = anon_sym_as,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_callbackObject] = sym_callbackObject,
  [sym_type] = sym_type,
  [sym_importFun] = sym_importFun,
  [sym_importStatement] = sym_importStatement,
  [sym_func] = sym_func,
  [sym_funcExpr] = sym_funcExpr,
  [sym_typeExpr] = sym_typeExpr,
  [sym_valExpr] = sym_valExpr,
  [sym_expr] = sym_expr,
  [sym_identifier] = sym_identifier,
  [sym_keyword] = sym_keyword,
  [sym_callbackIdentifier] = sym_callbackIdentifier,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reduce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_callbackObject] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_importFun] = {
    .visible = true,
    .named = true,
  },
  [sym_importStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_funcExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_typeExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_valExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_callbackIdentifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
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
  [8] = 6,
  [9] = 7,
  [10] = 10,
  [11] = 7,
  [12] = 12,
  [13] = 6,
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 6,
  [44] = 44,
  [45] = 7,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(61);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(88);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(77);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 54:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(80);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 60:
      if (eof) ADVANCE(61);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(59);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_reduce);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_reduce] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(66),
    [sym_importFun] = STATE(48),
    [sym_importStatement] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
  },
  [2] = {
    [sym__value] = STATE(47),
    [sym_object] = STATE(58),
    [sym_array] = STATE(58),
    [sym_string] = STATE(58),
    [sym_type] = STATE(71),
    [sym_func] = STATE(65),
    [sym_funcExpr] = STATE(57),
    [sym_typeExpr] = STATE(57),
    [sym_valExpr] = STATE(57),
    [sym_expr] = STATE(58),
    [sym_identifier] = STATE(17),
    [aux_sym_identifier_repeat1] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_datetime] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_filter] = ACTIONS(19),
    [anon_sym_reduce] = ACTIONS(19),
    [anon_sym_sort] = ACTIONS(19),
    [aux_sym_identifier_token1] = ACTIONS(21),
  },
  [3] = {
    [sym__value] = STATE(61),
    [sym_object] = STATE(58),
    [sym_array] = STATE(58),
    [sym_string] = STATE(58),
    [sym_type] = STATE(71),
    [sym_func] = STATE(65),
    [sym_funcExpr] = STATE(57),
    [sym_typeExpr] = STATE(57),
    [sym_valExpr] = STATE(57),
    [sym_expr] = STATE(58),
    [sym_identifier] = STATE(17),
    [aux_sym_identifier_repeat1] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_datetime] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_filter] = ACTIONS(19),
    [anon_sym_reduce] = ACTIONS(19),
    [anon_sym_sort] = ACTIONS(19),
    [aux_sym_identifier_token1] = ACTIONS(21),
  },
  [4] = {
    [sym__value] = STATE(59),
    [sym_object] = STATE(58),
    [sym_array] = STATE(58),
    [sym_string] = STATE(58),
    [sym_type] = STATE(71),
    [sym_func] = STATE(65),
    [sym_funcExpr] = STATE(57),
    [sym_typeExpr] = STATE(57),
    [sym_valExpr] = STATE(57),
    [sym_expr] = STATE(58),
    [sym_identifier] = STATE(17),
    [aux_sym_identifier_repeat1] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_datetime] = ACTIONS(17),
    [anon_sym_map] = ACTIONS(19),
    [anon_sym_filter] = ACTIONS(19),
    [anon_sym_reduce] = ACTIONS(19),
    [anon_sym_sort] = ACTIONS(19),
    [aux_sym_identifier_token1] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    STATE(65), 1,
      sym_func,
    STATE(68), 3,
      sym_object,
      sym_array,
      sym_funcExpr,
    ACTIONS(19), 4,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
  [24] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(23), 6,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
  [42] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(28), 6,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
  [60] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      aux_sym_identifier_token1,
    STATE(8), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(23), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LBRACE2,
      anon_sym_DOT,
  [77] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_identifier_token1,
    STATE(8), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(28), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LBRACE2,
      anon_sym_DOT,
  [94] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 6,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
  [106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_identifier_token1,
    STATE(13), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(28), 4,
      anon_sym_import,
      anon_sym_LBRACK_RBRACK,
      anon_sym_in,
      anon_sym_as,
  [122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 6,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
  [134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    STATE(13), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(23), 4,
      anon_sym_import,
      anon_sym_LBRACK_RBRACK,
      anon_sym_in,
      anon_sym_as,
  [150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(46), 1,
      sym_keyword,
    ACTIONS(46), 3,
      anon_sym_import,
      anon_sym_in,
      anon_sym_as,
  [165] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      sym_number,
    STATE(51), 1,
      sym_pair,
    STATE(67), 1,
      sym_string,
  [184] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_pair,
    STATE(67), 1,
      sym_string,
  [203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(56), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LBRACE2,
  [216] = 6,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      aux_sym_string_content_token1,
    ACTIONS(64), 1,
      sym_escape_sequence,
    ACTIONS(66), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_string_content_repeat1,
    STATE(70), 1,
      sym_string_content,
  [235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [245] = 5,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      aux_sym_string_content_token1,
    ACTIONS(75), 1,
      sym_escape_sequence,
    STATE(20), 1,
      aux_sym_string_content_repeat1,
  [261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym_keyword,
    ACTIONS(46), 3,
      anon_sym_import,
      anon_sym_in,
      anon_sym_as,
  [323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [333] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_identifier_token1,
    STATE(16), 1,
      sym_callbackIdentifier,
    STATE(45), 1,
      aux_sym_identifier_repeat1,
    STATE(64), 1,
      sym_identifier,
  [349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LBRACE2,
  [359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      aux_sym_identifier_repeat1,
    STATE(17), 1,
      sym_identifier,
    STATE(60), 1,
      sym_valExpr,
  [375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [405] = 5,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_string_content_token1,
    ACTIONS(106), 1,
      sym_escape_sequence,
    STATE(20), 1,
      aux_sym_string_content_repeat1,
  [421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_number,
    STATE(62), 1,
      sym_pair,
    STATE(67), 1,
      sym_string,
  [437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 4,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      aux_sym_identifier_token1,
  [457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(52), 1,
      sym_keyword,
    ACTIONS(46), 3,
      anon_sym_import,
      anon_sym_in,
      anon_sym_as,
  [469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [479] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      aux_sym_identifier_repeat1,
    STATE(17), 1,
      sym_identifier,
    STATE(54), 1,
      sym_valExpr,
  [495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_object_repeat1,
  [508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_object_repeat1,
  [521] = 4,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym_identifier_token1,
    STATE(43), 1,
      aux_sym_identifier_repeat1,
  [534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_object_repeat1,
  [547] = 4,
    ACTIONS(28), 1,
      anon_sym_,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_identifier_token1,
    STATE(43), 1,
      aux_sym_identifier_repeat1,
  [560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_identifier_token1,
    STATE(7), 1,
      aux_sym_identifier_repeat1,
    STATE(10), 1,
      sym_identifier,
  [573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_array_repeat1,
  [586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_identifier_token1,
    STATE(11), 1,
      aux_sym_identifier_repeat1,
    STATE(14), 1,
      sym_identifier,
  [599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_array_repeat1,
  [612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_object_repeat1,
  [625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_object_repeat1,
  [638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_identifier_token1,
    STATE(7), 1,
      aux_sym_identifier_repeat1,
    STATE(12), 1,
      sym_identifier,
  [651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_array_repeat1,
  [664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
  [682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      aux_sym_identifier_repeat1,
    STATE(29), 1,
      sym_identifier,
  [695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_LBRACE2,
    STATE(27), 1,
      sym_callbackObject,
  [731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [747] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_,
  [754] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_,
  [761] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_,
  [768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COLON,
  [782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
  [789] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_,
  [796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
  [803] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_,
  [810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_identifier_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 94,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 122,
  [SMALL_STATE(13)] = 134,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 184,
  [SMALL_STATE(17)] = 203,
  [SMALL_STATE(18)] = 216,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 261,
  [SMALL_STATE(22)] = 271,
  [SMALL_STATE(23)] = 281,
  [SMALL_STATE(24)] = 291,
  [SMALL_STATE(25)] = 301,
  [SMALL_STATE(26)] = 311,
  [SMALL_STATE(27)] = 323,
  [SMALL_STATE(28)] = 333,
  [SMALL_STATE(29)] = 349,
  [SMALL_STATE(30)] = 359,
  [SMALL_STATE(31)] = 375,
  [SMALL_STATE(32)] = 385,
  [SMALL_STATE(33)] = 395,
  [SMALL_STATE(34)] = 405,
  [SMALL_STATE(35)] = 421,
  [SMALL_STATE(36)] = 437,
  [SMALL_STATE(37)] = 447,
  [SMALL_STATE(38)] = 457,
  [SMALL_STATE(39)] = 469,
  [SMALL_STATE(40)] = 479,
  [SMALL_STATE(41)] = 495,
  [SMALL_STATE(42)] = 508,
  [SMALL_STATE(43)] = 521,
  [SMALL_STATE(44)] = 534,
  [SMALL_STATE(45)] = 547,
  [SMALL_STATE(46)] = 560,
  [SMALL_STATE(47)] = 573,
  [SMALL_STATE(48)] = 586,
  [SMALL_STATE(49)] = 599,
  [SMALL_STATE(50)] = 612,
  [SMALL_STATE(51)] = 625,
  [SMALL_STATE(52)] = 638,
  [SMALL_STATE(53)] = 651,
  [SMALL_STATE(54)] = 664,
  [SMALL_STATE(55)] = 673,
  [SMALL_STATE(56)] = 682,
  [SMALL_STATE(57)] = 695,
  [SMALL_STATE(58)] = 704,
  [SMALL_STATE(59)] = 713,
  [SMALL_STATE(60)] = 721,
  [SMALL_STATE(61)] = 731,
  [SMALL_STATE(62)] = 739,
  [SMALL_STATE(63)] = 747,
  [SMALL_STATE(64)] = 754,
  [SMALL_STATE(65)] = 761,
  [SMALL_STATE(66)] = 768,
  [SMALL_STATE(67)] = 775,
  [SMALL_STATE(68)] = 782,
  [SMALL_STATE(69)] = 789,
  [SMALL_STATE(70)] = 796,
  [SMALL_STATE(71)] = 803,
  [SMALL_STATE(72)] = 810,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(6),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importStatement, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importStatement, 5),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valExpr, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(20),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackObject, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackObject, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackObject, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcExpr, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valExpr, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(43),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(35),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeExpr, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackIdentifier, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importFun, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_etljson(void) {
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
