module.exports = grammar({
	name: 'etljson',

	rules: {
		source_file: $ => choice(
			$.object,
			$.array,
		),
		object: $ => seq(
			"{",
			repeat($._field),
			"}",
		),
		array: $ => seq(
			"[",
			repeat($.value),
			"]",
		),
		_field: $ => seq(
			$.string,
			":",
			$.value,
			optional(","),
		),
		value: $ => choice(
			$.funcExpr,
			$.typeExpr,
			$.object,
			$.array,
			$.string,
			$.number,
			$.boolean,
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
			$.object,
		),
		typeExpr: $ => seq(
			$.type,
			" ",
			$.valExpr,
		),
		valExpr: $ => choice(
			"$",
			seq("$", ".", $.identifier),
		),
		expr: $ => choice(
			$.funcExpr,
			$.typeExpr,
			$.valExpr,
		),
		boolean: $ => choice(
			"true",
			"false",
		),
		string: $ => seq(
			'"',
			repeat(choice(
				token.immediate(prec(1, /[^"\\]+/)),
				$.escape_sequence
			)),
			'"'
		),
		escape_sequence: $ => token.immediate(seq(
			'\\',
			choice(
				/["\\\/bfnrt]/,
				/u[0-9a-fA-F]{4}/
			)
		)),
		identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
		number: $ => /\d+/,
	}
});
