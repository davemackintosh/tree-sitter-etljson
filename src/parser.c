#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_COLON = 5,
  anon_sym_COMMA = 6,
  anon_sym_bool = 7,
  anon_sym_string = 8,
  anon_sym_float = 9,
  anon_sym_int = 10,
  anon_sym_datetime = 11,
  anon_sym_map = 12,
  anon_sym_filter = 13,
  anon_sym_reduce = 14,
  anon_sym_sort = 15,
  anon_sym_ = 16,
  anon_sym_DOLLAR = 17,
  anon_sym_DOT = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_string_token1 = 22,
  sym_escape_sequence = 23,
  sym_identifier = 24,
  sym_number = 25,
  sym_source_file = 26,
  sym_object = 27,
  sym_array = 28,
  sym__field = 29,
  sym_value = 30,
  sym_type = 31,
  sym_func = 32,
  sym_funcExpr = 33,
  sym_typeExpr = 34,
  sym_valExpr = 35,
  sym_boolean = 36,
  sym_string = 37,
  aux_sym_object_repeat1 = 38,
  aux_sym_array_repeat1 = 39,
  aux_sym_string_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOT] = ".",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_object] = "object",
  [sym_array] = "array",
  [sym__field] = "_field",
  [sym_value] = "value",
  [sym_type] = "type",
  [sym_func] = "func",
  [sym_funcExpr] = "funcExpr",
  [sym_typeExpr] = "typeExpr",
  [sym_valExpr] = "valExpr",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_object] = sym_object,
  [sym_array] = sym_array,
  [sym__field] = sym__field,
  [sym_value] = sym_value,
  [sym_type] = sym_type,
  [sym_func] = sym_func,
  [sym_funcExpr] = sym_funcExpr,
  [sym_typeExpr] = sym_typeExpr,
  [sym_valExpr] = sym_valExpr,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_RBRACE] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__field] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
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
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [aux_sym_string_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_reduce);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 44},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym_object] = STATE(30),
    [sym_array] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
  [2] = {
    [sym_object] = STATE(13),
    [sym_array] = STATE(13),
    [sym_value] = STATE(4),
    [sym_type] = STATE(32),
    [sym_func] = STATE(36),
    [sym_funcExpr] = STATE(13),
    [sym_typeExpr] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_array_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_datetime] = ACTIONS(9),
    [anon_sym_map] = ACTIONS(11),
    [anon_sym_filter] = ACTIONS(11),
    [anon_sym_reduce] = ACTIONS(11),
    [anon_sym_sort] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
  },
  [3] = {
    [sym_object] = STATE(13),
    [sym_array] = STATE(13),
    [sym_value] = STATE(2),
    [sym_type] = STATE(32),
    [sym_func] = STATE(36),
    [sym_funcExpr] = STATE(13),
    [sym_typeExpr] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_array_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_datetime] = ACTIONS(9),
    [anon_sym_map] = ACTIONS(11),
    [anon_sym_filter] = ACTIONS(11),
    [anon_sym_reduce] = ACTIONS(11),
    [anon_sym_sort] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
  },
  [4] = {
    [sym_object] = STATE(13),
    [sym_array] = STATE(13),
    [sym_value] = STATE(4),
    [sym_type] = STATE(32),
    [sym_func] = STATE(36),
    [sym_funcExpr] = STATE(13),
    [sym_typeExpr] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_array_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(29),
    [anon_sym_string] = ACTIONS(29),
    [anon_sym_float] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(29),
    [anon_sym_datetime] = ACTIONS(29),
    [anon_sym_map] = ACTIONS(32),
    [anon_sym_filter] = ACTIONS(32),
    [anon_sym_reduce] = ACTIONS(32),
    [anon_sym_sort] = ACTIONS(32),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(38),
    [sym_number] = ACTIONS(41),
  },
  [5] = {
    [sym_object] = STATE(13),
    [sym_array] = STATE(13),
    [sym_value] = STATE(24),
    [sym_type] = STATE(32),
    [sym_func] = STATE(36),
    [sym_funcExpr] = STATE(13),
    [sym_typeExpr] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_string] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_bool] = ACTIONS(9),
    [anon_sym_string] = ACTIONS(9),
    [anon_sym_float] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_datetime] = ACTIONS(9),
    [anon_sym_map] = ACTIONS(11),
    [anon_sym_filter] = ACTIONS(11),
    [anon_sym_reduce] = ACTIONS(11),
    [anon_sym_sort] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(44), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_number,
  [22] = 1,
    ACTIONS(46), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_number,
  [44] = 2,
    ACTIONS(50), 1,
      anon_sym_DOT,
    ACTIONS(48), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_number,
  [68] = 1,
    ACTIONS(52), 19,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_number,
  [90] = 1,
    ACTIONS(54), 19,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_number,
  [112] = 1,
    ACTIONS(56), 19,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_number,
  [134] = 1,
    ACTIONS(58), 19,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_number,
  [156] = 1,
    ACTIONS(60), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_number,
  [177] = 1,
    ACTIONS(62), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_number,
  [198] = 1,
    ACTIONS(64), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_number,
  [219] = 1,
    ACTIONS(66), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_number,
  [240] = 1,
    ACTIONS(68), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_float,
      anon_sym_int,
      anon_sym_datetime,
      anon_sym_map,
      anon_sym_filter,
      anon_sym_reduce,
      anon_sym_sort,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_number,
  [261] = 4,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_string,
    STATE(19), 2,
      sym__field,
      aux_sym_object_repeat1,
  [275] = 4,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_string,
    STATE(20), 2,
      sym__field,
      aux_sym_object_repeat1,
  [289] = 4,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
    STATE(20), 2,
      sym__field,
      aux_sym_object_repeat1,
  [303] = 3,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_string_repeat1,
    ACTIONS(81), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [314] = 3,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_repeat1,
    ACTIONS(86), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [325] = 3,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_string_repeat1,
    ACTIONS(90), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [336] = 2,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(92), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [344] = 2,
    ACTIONS(96), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      sym_valExpr,
  [351] = 2,
    ACTIONS(96), 1,
      anon_sym_DOLLAR,
    STATE(16), 1,
      sym_valExpr,
  [358] = 2,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_object,
  [365] = 1,
    ACTIONS(98), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [370] = 1,
    ACTIONS(100), 1,
      anon_sym_,
  [374] = 1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
  [378] = 1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
  [382] = 1,
    ACTIONS(106), 1,
      anon_sym_,
  [386] = 1,
    ACTIONS(108), 1,
      anon_sym_,
  [390] = 1,
    ACTIONS(110), 1,
      sym_identifier,
  [394] = 1,
    ACTIONS(112), 1,
      anon_sym_COLON,
  [398] = 1,
    ACTIONS(114), 1,
      anon_sym_,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 22,
  [SMALL_STATE(8)] = 44,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 134,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 177,
  [SMALL_STATE(15)] = 198,
  [SMALL_STATE(16)] = 219,
  [SMALL_STATE(17)] = 240,
  [SMALL_STATE(18)] = 261,
  [SMALL_STATE(19)] = 275,
  [SMALL_STATE(20)] = 289,
  [SMALL_STATE(21)] = 303,
  [SMALL_STATE(22)] = 314,
  [SMALL_STATE(23)] = 325,
  [SMALL_STATE(24)] = 336,
  [SMALL_STATE(25)] = 344,
  [SMALL_STATE(26)] = 351,
  [SMALL_STATE(27)] = 358,
  [SMALL_STATE(28)] = 365,
  [SMALL_STATE(29)] = 370,
  [SMALL_STATE(30)] = 374,
  [SMALL_STATE(31)] = 378,
  [SMALL_STATE(32)] = 382,
  [SMALL_STATE(33)] = 386,
  [SMALL_STATE(34)] = 390,
  [SMALL_STATE(35)] = 394,
  [SMALL_STATE(36)] = 398,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(18),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(29),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(33),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(22),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valExpr, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valExpr, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcExpr, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeExpr, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(22),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
