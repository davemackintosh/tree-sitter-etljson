#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_ = 15,
  anon_sym_bool = 16,
  anon_sym_string = 17,
  anon_sym_float = 18,
  anon_sym_int = 19,
  anon_sym_datetime = 20,
  anon_sym_map = 21,
  anon_sym_filter = 22,
  anon_sym_reduce = 23,
  anon_sym_sort = 24,
  anon_sym_DOLLAR = 25,
  anon_sym_DOT = 26,
  aux_sym_identifier_token1 = 27,
  anon_sym_in = 28,
  sym_document = 29,
  sym__value = 30,
  sym_object = 31,
  sym_pair = 32,
  sym_array = 33,
  sym_string = 34,
  sym_string_content = 35,
  sym_callbackObject = 36,
  sym_type = 37,
  sym_func = 38,
  sym_funcExpr = 39,
  sym_typeExpr = 40,
  sym_valExpr = 41,
  sym_expr = 42,
  sym_identifier = 43,
  sym_keyword = 44,
  sym_callbackIdentifier = 45,
  aux_sym_object_repeat1 = 46,
  aux_sym_array_repeat1 = 47,
  aux_sym_string_content_repeat1 = 48,
  aux_sym_identifier_repeat1 = 49,
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
  [anon_sym_] = " ",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_float] = "float",
  [anon_sym_int] = "int",
  [anon_sym_datetime] = "datetime",
  [anon_sym_map] = "map",
  [anon_sym_filter] = "filter",
  [anon_sym_reduce] = "reduce",
  [anon_sym_sort] = "sort",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOT] = ".",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_in] = "in",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_callbackObject] = "callbackObject",
  [sym_type] = "type",
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
  [anon_sym_] = anon_sym_,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_reduce] = anon_sym_reduce,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_in] = anon_sym_in,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_callbackObject] = sym_callbackObject,
  [sym_type] = sym_type,
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
  [anon_sym_] = {
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
  [anon_sym_DOLLAR] = {
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 5,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 6,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(70);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 45:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(73);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 52:
      if (eof) ADVANCE(54);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_reduce);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 53},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
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
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_reduce] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(57),
    [sym__value] = STATE(58),
    [sym_object] = STATE(29),
    [sym_array] = STATE(29),
    [sym_string] = STATE(29),
    [sym_type] = STATE(51),
    [sym_func] = STATE(55),
    [sym_funcExpr] = STATE(19),
    [sym_typeExpr] = STATE(19),
    [sym_valExpr] = STATE(19),
    [sym_expr] = STATE(29),
    [sym_identifier] = STATE(7),
    [aux_sym_identifier_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_bool] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_datetime] = ACTIONS(13),
    [anon_sym_map] = ACTIONS(15),
    [anon_sym_filter] = ACTIONS(15),
    [anon_sym_reduce] = ACTIONS(15),
    [anon_sym_sort] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [aux_sym_identifier_token1] = ACTIONS(19),
  },
  [2] = {
    [sym__value] = STATE(43),
    [sym_object] = STATE(29),
    [sym_array] = STATE(29),
    [sym_string] = STATE(29),
    [sym_type] = STATE(51),
    [sym_func] = STATE(55),
    [sym_funcExpr] = STATE(19),
    [sym_typeExpr] = STATE(19),
    [sym_valExpr] = STATE(19),
    [sym_expr] = STATE(29),
    [sym_identifier] = STATE(7),
    [aux_sym_identifier_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_bool] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_datetime] = ACTIONS(13),
    [anon_sym_map] = ACTIONS(15),
    [anon_sym_filter] = ACTIONS(15),
    [anon_sym_reduce] = ACTIONS(15),
    [anon_sym_sort] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [aux_sym_identifier_token1] = ACTIONS(19),
  },
  [3] = {
    [sym__value] = STATE(47),
    [sym_object] = STATE(29),
    [sym_array] = STATE(29),
    [sym_string] = STATE(29),
    [sym_type] = STATE(51),
    [sym_func] = STATE(55),
    [sym_funcExpr] = STATE(19),
    [sym_typeExpr] = STATE(19),
    [sym_valExpr] = STATE(19),
    [sym_expr] = STATE(29),
    [sym_identifier] = STATE(7),
    [aux_sym_identifier_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_bool] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_datetime] = ACTIONS(13),
    [anon_sym_map] = ACTIONS(15),
    [anon_sym_filter] = ACTIONS(15),
    [anon_sym_reduce] = ACTIONS(15),
    [anon_sym_sort] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [aux_sym_identifier_token1] = ACTIONS(19),
  },
  [4] = {
    [sym__value] = STATE(46),
    [sym_object] = STATE(29),
    [sym_array] = STATE(29),
    [sym_string] = STATE(29),
    [sym_type] = STATE(51),
    [sym_func] = STATE(55),
    [sym_funcExpr] = STATE(19),
    [sym_typeExpr] = STATE(19),
    [sym_valExpr] = STATE(19),
    [sym_expr] = STATE(29),
    [sym_identifier] = STATE(7),
    [aux_sym_identifier_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_bool] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_datetime] = ACTIONS(13),
    [anon_sym_map] = ACTIONS(15),
    [anon_sym_filter] = ACTIONS(15),
    [anon_sym_reduce] = ACTIONS(15),
    [anon_sym_sort] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [aux_sym_identifier_token1] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(23), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [18] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(28), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [36] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_DOT,
    ACTIONS(32), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [50] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(36), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      aux_sym_identifier_repeat1,
    STATE(7), 1,
      sym_identifier,
    STATE(50), 1,
      sym_valExpr,
  [69] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(40), 1,
      sym_number,
    STATE(44), 1,
      sym_pair,
    STATE(60), 1,
      sym_string,
  [88] = 6,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      aux_sym_string_content_token1,
    ACTIONS(46), 1,
      sym_escape_sequence,
    ACTIONS(48), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_string_content_repeat1,
    STATE(59), 1,
      sym_string_content,
  [107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      sym_number,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_pair,
    STATE(60), 1,
      sym_string,
  [126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [148] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(36), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      aux_sym_identifier_repeat1,
    STATE(7), 1,
      sym_identifier,
    STATE(30), 1,
      sym_valExpr,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym_identifier_token1,
    STATE(11), 1,
      sym_callbackIdentifier,
    STATE(45), 1,
      aux_sym_identifier_repeat1,
    STATE(52), 1,
      sym_identifier,
  [244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [284] = 5,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      aux_sym_string_content_token1,
    ACTIONS(82), 1,
      sym_escape_sequence,
    STATE(31), 1,
      aux_sym_string_content_repeat1,
  [300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      sym_number,
    STATE(49), 1,
      sym_pair,
    STATE(60), 1,
      sym_string,
  [326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [346] = 5,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_string_content_token1,
    ACTIONS(95), 1,
      sym_escape_sequence,
    STATE(31), 1,
      aux_sym_string_content_repeat1,
  [362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_object_repeat1,
  [385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_array_repeat1,
  [398] = 4,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_identifier_token1,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
  [411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
  [420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_object_repeat1,
  [433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
  [442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_object_repeat1,
  [455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_object_repeat1,
  [468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      aux_sym_identifier_repeat1,
    STATE(12), 1,
      sym_identifier,
  [481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_array_repeat1,
  [494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_array_repeat1,
  [507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_object_repeat1,
  [520] = 4,
    ACTIONS(28), 1,
      anon_sym_,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_identifier_token1,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_in,
    STATE(36), 1,
      sym_keyword,
  [559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_callbackObject,
  [577] = 2,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_,
  [584] = 2,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_,
  [591] = 2,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_,
  [598] = 2,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_,
  [605] = 2,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_,
  [612] = 2,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_,
  [619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
  [640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 18,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 50,
  [SMALL_STATE(9)] = 69,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 107,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 137,
  [SMALL_STATE(14)] = 148,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 178,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 208,
  [SMALL_STATE(20)] = 218,
  [SMALL_STATE(21)] = 228,
  [SMALL_STATE(22)] = 244,
  [SMALL_STATE(23)] = 254,
  [SMALL_STATE(24)] = 264,
  [SMALL_STATE(25)] = 274,
  [SMALL_STATE(26)] = 284,
  [SMALL_STATE(27)] = 300,
  [SMALL_STATE(28)] = 310,
  [SMALL_STATE(29)] = 326,
  [SMALL_STATE(30)] = 336,
  [SMALL_STATE(31)] = 346,
  [SMALL_STATE(32)] = 362,
  [SMALL_STATE(33)] = 372,
  [SMALL_STATE(34)] = 385,
  [SMALL_STATE(35)] = 398,
  [SMALL_STATE(36)] = 411,
  [SMALL_STATE(37)] = 420,
  [SMALL_STATE(38)] = 433,
  [SMALL_STATE(39)] = 442,
  [SMALL_STATE(40)] = 455,
  [SMALL_STATE(41)] = 468,
  [SMALL_STATE(42)] = 481,
  [SMALL_STATE(43)] = 494,
  [SMALL_STATE(44)] = 507,
  [SMALL_STATE(45)] = 520,
  [SMALL_STATE(46)] = 533,
  [SMALL_STATE(47)] = 541,
  [SMALL_STATE(48)] = 549,
  [SMALL_STATE(49)] = 559,
  [SMALL_STATE(50)] = 567,
  [SMALL_STATE(51)] = 577,
  [SMALL_STATE(52)] = 584,
  [SMALL_STATE(53)] = 591,
  [SMALL_STATE(54)] = 598,
  [SMALL_STATE(55)] = 605,
  [SMALL_STATE(56)] = 612,
  [SMALL_STATE(57)] = 619,
  [SMALL_STATE(58)] = 626,
  [SMALL_STATE(59)] = 633,
  [SMALL_STATE(60)] = 640,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(5),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valExpr, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valExpr, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackObject, 5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackObject, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcExpr, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackObject, 6),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeExpr, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(31),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(31),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(35),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackIdentifier, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(28),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 1),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
