const JSON = require('tree-sitter-json/grammar');

module.exports = grammar(JSON, {
	name: 'etljson',

	rules: {
		document: $ => seq(
			repeat1($.importStatement),
			$.keyword,
			choice(
				$.funcExpr,
				$.object,
				$.array,
			),
		),
		importStatement: $ => seq(
			$.keyword,
			$.identifier,
			optional("[]"),
			$.keyword,
			$.identifier,
		),
		callbackObject: $ => seq(
			"{ ",
			$.callbackIdentifier,
			optional(repeat($.filterExpr)),
			commaSep($.pair),
			"}",
		),
		_value: $ => choice(
			$.expr,
			$.object,
			$.array,
			$.literal,
		),
		literal: $ => choice(
			$.number,
			$.string,
			$.true,
			$.false,
			$.null,
		),
		type: $ => choice(
			'bool',
			'string',
			'float',
			'int',
			'datetime'
		),
		func: $ => choice(
			"map",
			"filter",
			"reduce",
			"sort",
		),
		funcExpr: $ => seq(
			$.func,
			" ",
			$.valExpr,
			$.callbackObject,
		),
		filterExpr: $ => seq(
			$.keyword,
			$.valExpr,
			$.keyword,
		),
		equalityExpr: $ => seq(
			$.valExpr,
			$.keyword,
			$.literal,
		),
		typeExpr: $ => seq(
			$.type,
			" ",
			$.valExpr,
		),
		valExpr: $ => seq(
			$.identifier,
			optional(seq(".", $.identifier)),
		),
		expr: $ => choice(
			$.funcExpr,
			$.typeExpr,
			$.valExpr,
		),
		identifier: $ => repeat1(choice(/[a-zA-Z_]/)),
		keyword: $ => choice("in", "import", "export", "as", "where", "and", "has", "not"),
		callbackIdentifier: $ => seq(
			$.identifier,
			" ",
			$.keyword,
		),
	}
});

function commaSep1(rule) {
	return seq(rule, repeat(seq(",", rule)))
}

function commaSep(rule) {
	return optional(commaSep1(rule))
}
