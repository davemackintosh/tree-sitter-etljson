#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_LBRACK_RBRACK = 15,
  anon_sym_LBRACE2 = 16,
  anon_sym_bool = 17,
  anon_sym_string = 18,
  anon_sym_float = 19,
  anon_sym_int = 20,
  anon_sym_datetime = 21,
  anon_sym_map = 22,
  anon_sym_filter = 23,
  anon_sym_reduce = 24,
  anon_sym_sort = 25,
  anon_sym_ = 26,
  anon_sym_DOT = 27,
  aux_sym_identifier_token1 = 28,
  anon_sym_in = 29,
  anon_sym_import = 30,
  anon_sym_export = 31,
  anon_sym_as = 32,
  anon_sym_where = 33,
  anon_sym_and = 34,
  anon_sym_has = 35,
  anon_sym_not = 36,
  sym_document = 37,
  sym__value = 38,
  sym_object = 39,
  sym_pair = 40,
  sym_array = 41,
  sym_string = 42,
  sym_string_content = 43,
  sym_importStatement = 44,
  sym_callbackObject = 45,
  sym_literal = 46,
  sym_type = 47,
  sym_func = 48,
  sym_funcExpr = 49,
  sym_filterExpr = 50,
  sym_typeExpr = 51,
  sym_valExpr = 52,
  sym_expr = 53,
  sym_identifier = 54,
  sym_keyword = 55,
  sym_callbackIdentifier = 56,
  aux_sym_document_repeat1 = 57,
  aux_sym_object_repeat1 = 58,
  aux_sym_array_repeat1 = 59,
  aux_sym_string_content_repeat1 = 60,
  aux_sym_callbackObject_repeat1 = 61,
  aux_sym_identifier_repeat1 = 62,
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
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_LBRACE2] = "{ ",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_float] = "float",
  [anon_sym_int] = "int",
  [anon_sym_datetime] = "datetime",
  [anon_sym_map] = "map",
  [anon_sym_filter] = "filter",
  [anon_sym_reduce] = "reduce",
  [anon_sym_sort] = "sort",
  [anon_sym_] = " ",
  [anon_sym_DOT] = ".",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_in] = "in",
  [anon_sym_import] = "import",
  [anon_sym_export] = "export",
  [anon_sym_as] = "as",
  [anon_sym_where] = "where",
  [anon_sym_and] = "and",
  [anon_sym_has] = "has",
  [anon_sym_not] = "not",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_importStatement] = "importStatement",
  [sym_callbackObject] = "callbackObject",
  [sym_literal] = "literal",
  [sym_type] = "type",
  [sym_func] = "func",
  [sym_funcExpr] = "funcExpr",
  [sym_filterExpr] = "filterExpr",
  [sym_typeExpr] = "typeExpr",
  [sym_valExpr] = "valExpr",
  [sym_expr] = "expr",
  [sym_identifier] = "identifier",
  [sym_keyword] = "keyword",
  [sym_callbackIdentifier] = "callbackIdentifier",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_callbackObject_repeat1] = "callbackObject_repeat1",
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
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LBRACE2] = anon_sym_LBRACE2,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_reduce] = anon_sym_reduce,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_] = anon_sym_,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_has] = anon_sym_has,
  [anon_sym_not] = anon_sym_not,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_importStatement] = sym_importStatement,
  [sym_callbackObject] = sym_callbackObject,
  [sym_literal] = sym_literal,
  [sym_type] = sym_type,
  [sym_func] = sym_func,
  [sym_funcExpr] = sym_funcExpr,
  [sym_filterExpr] = sym_filterExpr,
  [sym_typeExpr] = sym_typeExpr,
  [sym_valExpr] = sym_valExpr,
  [sym_expr] = sym_expr,
  [sym_identifier] = sym_identifier,
  [sym_keyword] = sym_keyword,
  [sym_callbackIdentifier] = sym_callbackIdentifier,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_callbackObject_repeat1] = aux_sym_callbackObject_repeat1,
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
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
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
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
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
  [sym_importStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_callbackObject] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
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
  [sym_filterExpr] = {
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_callbackObject_repeat1] = {
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
  [24] = 9,
  [25] = 16,
  [26] = 10,
  [27] = 27,
  [28] = 28,
  [29] = 19,
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
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 10,
  [54] = 54,
  [55] = 55,
  [56] = 9,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 58,
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
  [82] = 16,
  [83] = 83,
  [84] = 84,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'h') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'h') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(105);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 68:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 69:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(96);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'h') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_reduce);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 0},
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
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_reduce] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(84),
    [sym_importStatement] = STATE(15),
    [sym_keyword] = STATE(57),
    [aux_sym_document_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(5),
    [anon_sym_as] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_and] = ACTIONS(5),
    [anon_sym_has] = ACTIONS(5),
    [anon_sym_not] = ACTIONS(5),
  },
  [2] = {
    [sym__value] = STATE(54),
    [sym_object] = STATE(60),
    [sym_array] = STATE(60),
    [sym_string] = STATE(61),
    [sym_literal] = STATE(60),
    [sym_type] = STATE(76),
    [sym_func] = STATE(77),
    [sym_funcExpr] = STATE(69),
    [sym_typeExpr] = STATE(69),
    [sym_valExpr] = STATE(69),
    [sym_expr] = STATE(60),
    [sym_identifier] = STATE(29),
    [aux_sym_identifier_repeat1] = STATE(24),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    STATE(24), 1,
      aux_sym_identifier_repeat1,
    STATE(29), 1,
      sym_identifier,
    STATE(61), 1,
      sym_string,
    STATE(74), 1,
      sym__value,
    STATE(76), 1,
      sym_type,
    STATE(77), 1,
      sym_func,
    STATE(69), 3,
      sym_funcExpr,
      sym_typeExpr,
      sym_valExpr,
    ACTIONS(15), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(19), 4,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
    STATE(60), 4,
      sym_object,
      sym_array,
      sym_literal,
      sym_expr,
    ACTIONS(17), 5,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
  [64] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    STATE(24), 1,
      aux_sym_identifier_repeat1,
    STATE(29), 1,
      sym_identifier,
    STATE(61), 1,
      sym_string,
    STATE(72), 1,
      sym__value,
    STATE(76), 1,
      sym_type,
    STATE(77), 1,
      sym_func,
    STATE(69), 3,
      sym_funcExpr,
      sym_typeExpr,
      sym_valExpr,
    ACTIONS(15), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
    ACTIONS(19), 4,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
    STATE(60), 4,
      sym_object,
      sym_array,
      sym_literal,
      sym_expr,
    ACTIONS(17), 5,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
  [128] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      sym_number,
    STATE(38), 1,
      sym_keyword,
    STATE(64), 1,
      sym_pair,
    STATE(78), 1,
      sym_string,
    STATE(6), 2,
      sym_filterExpr,
      aux_sym_callbackObject_repeat1,
    ACTIONS(5), 8,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [164] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_keyword,
    STATE(70), 1,
      sym_pair,
    STATE(78), 1,
      sym_string,
    STATE(7), 2,
      sym_filterExpr,
      aux_sym_callbackObject_repeat1,
    ACTIONS(5), 8,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym_keyword,
    STATE(7), 2,
      sym_filterExpr,
      aux_sym_callbackObject_repeat1,
    ACTIONS(29), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(31), 8,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [226] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(34), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      aux_sym_identifier_repeat1,
    STATE(17), 1,
      sym_identifier,
    STATE(77), 1,
      sym_func,
    STATE(79), 3,
      sym_object,
      sym_array,
      sym_funcExpr,
    ACTIONS(19), 4,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
  [259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(36), 10,
      anon_sym_LBRACK_RBRACK,
      anon_sym_DOT,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(40), 10,
      anon_sym_LBRACK_RBRACK,
      anon_sym_DOT,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LBRACE2,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(57), 1,
      sym_keyword,
    STATE(12), 2,
      sym_importStatement,
      aux_sym_document_repeat1,
    ACTIONS(47), 8,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 11,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 11,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(8), 1,
      sym_keyword,
    STATE(12), 2,
      sym_importStatement,
      aux_sym_document_repeat1,
    ACTIONS(54), 8,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 11,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(59), 1,
      sym_keyword,
    ACTIONS(5), 8,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 1,
      sym_keyword,
    ACTIONS(5), 8,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 8,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(13), 1,
      sym_keyword,
    ACTIONS(64), 8,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_keyword,
    ACTIONS(64), 8,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 8,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 8,
      anon_sym_in,
      anon_sym_import,
      anon_sym_export,
      anon_sym_as,
      anon_sym_where,
      anon_sym_and,
      anon_sym_has,
      anon_sym_not,
  [530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      aux_sym_identifier_token1,
    STATE(26), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(36), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LBRACE2,
      anon_sym_DOT,
  [547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 6,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
  [562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      aux_sym_identifier_token1,
    STATE(26), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(40), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LBRACE2,
      anon_sym_DOT,
  [579] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_pair,
    STATE(78), 1,
      sym_string,
  [598] = 6,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      aux_sym_string_content_token1,
    ACTIONS(83), 1,
      sym_escape_sequence,
    ACTIONS(85), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_string_content_repeat1,
    STATE(75), 1,
      sym_string_content,
  [617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(62), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LBRACE2,
  [630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [690] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_identifier_token1,
    STATE(24), 1,
      aux_sym_identifier_repeat1,
    STATE(29), 1,
      sym_identifier,
    STATE(71), 1,
      sym_valExpr,
  [706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [716] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      aux_sym_identifier_repeat1,
    STATE(19), 1,
      sym_identifier,
    STATE(20), 1,
      sym_valExpr,
  [732] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      aux_sym_string_content_token1,
    ACTIONS(111), 1,
      sym_escape_sequence,
    STATE(48), 1,
      aux_sym_string_content_repeat1,
  [748] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_number,
    STATE(73), 1,
      sym_pair,
    STATE(78), 1,
      sym_string,
  [764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [794] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_identifier_token1,
    STATE(24), 1,
      aux_sym_identifier_repeat1,
    STATE(29), 1,
      sym_identifier,
    STATE(50), 1,
      sym_valExpr,
  [810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [820] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      sym_callbackIdentifier,
    STATE(56), 1,
      aux_sym_identifier_repeat1,
    STATE(81), 1,
      sym_identifier,
  [836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [846] = 5,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      aux_sym_string_content_token1,
    ACTIONS(130), 1,
      sym_escape_sequence,
    STATE(48), 1,
      aux_sym_string_content_repeat1,
  [862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      aux_sym_identifier_repeat1,
    STATE(23), 1,
      sym_identifier,
  [894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_repeat1,
  [907] = 4,
    ACTIONS(40), 1,
      anon_sym_,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_identifier_token1,
    STATE(53), 1,
      aux_sym_identifier_repeat1,
  [920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_array_repeat1,
  [933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_array_repeat1,
  [946] = 4,
    ACTIONS(36), 1,
      anon_sym_,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(154), 1,
      aux_sym_identifier_token1,
    STATE(53), 1,
      aux_sym_identifier_repeat1,
  [959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      aux_sym_identifier_repeat1,
    STATE(17), 1,
      sym_identifier,
  [972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      aux_sym_identifier_repeat1,
    STATE(11), 1,
      sym_identifier,
  [985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      aux_sym_identifier_repeat1,
    STATE(22), 1,
      sym_identifier,
  [998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_identifier_token1,
    STATE(11), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_identifier_repeat1,
  [1029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_array_repeat1,
  [1042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_object_repeat1,
  [1055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_repeat1,
  [1068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_object_repeat1,
  [1081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_repeat1,
  [1094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_repeat1,
  [1107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_object_repeat1,
  [1129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LBRACE2,
    STATE(45), 1,
      sym_callbackObject,
  [1139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
  [1170] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_,
  [1177] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_,
  [1184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [1191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [1198] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_,
  [1205] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_,
  [1212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      aux_sym_identifier_token1,
  [1219] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 200,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 259,
  [SMALL_STATE(10)] = 281,
  [SMALL_STATE(11)] = 303,
  [SMALL_STATE(12)] = 321,
  [SMALL_STATE(13)] = 342,
  [SMALL_STATE(14)] = 359,
  [SMALL_STATE(15)] = 376,
  [SMALL_STATE(16)] = 397,
  [SMALL_STATE(17)] = 414,
  [SMALL_STATE(18)] = 434,
  [SMALL_STATE(19)] = 451,
  [SMALL_STATE(20)] = 468,
  [SMALL_STATE(21)] = 485,
  [SMALL_STATE(22)] = 502,
  [SMALL_STATE(23)] = 516,
  [SMALL_STATE(24)] = 530,
  [SMALL_STATE(25)] = 547,
  [SMALL_STATE(26)] = 562,
  [SMALL_STATE(27)] = 579,
  [SMALL_STATE(28)] = 598,
  [SMALL_STATE(29)] = 617,
  [SMALL_STATE(30)] = 630,
  [SMALL_STATE(31)] = 640,
  [SMALL_STATE(32)] = 650,
  [SMALL_STATE(33)] = 660,
  [SMALL_STATE(34)] = 670,
  [SMALL_STATE(35)] = 680,
  [SMALL_STATE(36)] = 690,
  [SMALL_STATE(37)] = 706,
  [SMALL_STATE(38)] = 716,
  [SMALL_STATE(39)] = 732,
  [SMALL_STATE(40)] = 748,
  [SMALL_STATE(41)] = 764,
  [SMALL_STATE(42)] = 774,
  [SMALL_STATE(43)] = 784,
  [SMALL_STATE(44)] = 794,
  [SMALL_STATE(45)] = 810,
  [SMALL_STATE(46)] = 820,
  [SMALL_STATE(47)] = 836,
  [SMALL_STATE(48)] = 846,
  [SMALL_STATE(49)] = 862,
  [SMALL_STATE(50)] = 872,
  [SMALL_STATE(51)] = 881,
  [SMALL_STATE(52)] = 894,
  [SMALL_STATE(53)] = 907,
  [SMALL_STATE(54)] = 920,
  [SMALL_STATE(55)] = 933,
  [SMALL_STATE(56)] = 946,
  [SMALL_STATE(57)] = 959,
  [SMALL_STATE(58)] = 972,
  [SMALL_STATE(59)] = 985,
  [SMALL_STATE(60)] = 998,
  [SMALL_STATE(61)] = 1007,
  [SMALL_STATE(62)] = 1016,
  [SMALL_STATE(63)] = 1029,
  [SMALL_STATE(64)] = 1042,
  [SMALL_STATE(65)] = 1055,
  [SMALL_STATE(66)] = 1068,
  [SMALL_STATE(67)] = 1081,
  [SMALL_STATE(68)] = 1094,
  [SMALL_STATE(69)] = 1107,
  [SMALL_STATE(70)] = 1116,
  [SMALL_STATE(71)] = 1129,
  [SMALL_STATE(72)] = 1139,
  [SMALL_STATE(73)] = 1147,
  [SMALL_STATE(74)] = 1155,
  [SMALL_STATE(75)] = 1163,
  [SMALL_STATE(76)] = 1170,
  [SMALL_STATE(77)] = 1177,
  [SMALL_STATE(78)] = 1184,
  [SMALL_STATE(79)] = 1191,
  [SMALL_STATE(80)] = 1198,
  [SMALL_STATE(81)] = 1205,
  [SMALL_STATE(82)] = 1212,
  [SMALL_STATE(83)] = 1219,
  [SMALL_STATE(84)] = 1226,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callbackObject_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_callbackObject_repeat1, 2), SHIFT_REPEAT(82),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valExpr, 3),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filterExpr, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackIdentifier, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valExpr, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importStatement, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importStatement, 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(26),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackObject, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackObject, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackObject, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callbackObject, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcExpr, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(48),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(48),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeExpr, 3),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(40),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(53),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
