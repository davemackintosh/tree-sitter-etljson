const JSON = require('tree-sitter-json/grammar');

module.exports = grammar(JSON, {
	name: 'etljson',

	rules: {
		callbackObject: $ => seq(
			"{",
			" ",
			$.callbackIdentifier,
			commaSep($.pair),
			"}",
		),
		_value: $ => choice(
			$.expr,
			$.object,
			$.array,
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
		typeExpr: $ => seq(
			$.type,
			" ",
			$.valExpr,
		),
		valExpr: $ => seq(
			choice(
				"$",
				$.identifier,
			),
			optional(seq(".", $.identifier)),
		),
		expr: $ => choice(
			$.funcExpr,
			$.typeExpr,
			$.valExpr,
		),
		identifier: $ => repeat1(choice(/[a-zA-Z_]/)),
		keyword: $ => choice("in"),
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
