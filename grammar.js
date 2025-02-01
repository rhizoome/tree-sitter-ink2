module.exports = grammar({
    name: "ink",
    extras: $ => [/[ \t\v\f\u00A0\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2007\u2008\u2009\u200A\u2028\u2029\u202F\u205F\u3000]/],
    conflicts: $ => [
    ],
    externals: $ => [
        $.arrow,
        $.body_start,
        $.stitch_start,
        $.knot_start,
        $.function_start,
        $.line_end
    ],

    rules: {

        program: $ => seq(
            optional($.weave_body),
            repeat(
                choice(
                    $.knot,
                    $.function
                )
            )
        ),

        knot: $ => seq(
            $.knot_header,
            optional($.weave_body),
            repeat(
                $.stitch
            )
        ),

        knot_header: $ => seq(
            $.knot_start,
            optional(/=+/),
            $.identifier,
            optional(/=+/),
            $.line_end
        ),

        stitch: $ => seq(
            $.stitch_header,
            $.weave_body,
        ),

        stitch_header: $ => seq(
            $.stitch_start,
            $.identifier,
            $.line_end,
        ),

        weave_body: $ => prec.right(repeat1($.weave_body_line)),

        weave_body_line: $ => seq(
            $.body_start,
            optional(choice(
                $.choice_text,
                $.code_text,
                $.dialog_text,
                $.gather_text
            )),
            $.line_end
        ),

        function: $ => seq(
            $.function_header,
            $.function_body
        ),

        gather_text: $ => seq(
            $.gather_mark,
            $.text,
            optional($.divert)
        ),

        gather_mark: $ => repeat1(
            /-/,
        ),

        choice_text: $ => seq(
            $.choice_mark,
            $.text,
            optional($.divert)
        ),

        choice_mark: $ => repeat1(
            /[\+\*]/,
        ),

        code_text: $ => seq(
            /~/,
            $.text,
        ),

        dialog_text: $ => seq(
            $.text,
            optional($.divert)
        ),

        text: $ => repeat1(choice(
            $.vocabular,
            $.other
        )),

        divert: $ => seq(
            $.arrow,
            $.identifier,
        ),

        function_header: $ => seq(
            $.function_start,
            optional(/=+/),
            $.identifier,
            optional($.arguments),
            optional(/=+/),
            $.line_end
        ),

        function_body: $ => prec.right(repeat1($.function_body_line)),

        function_body_line: $ => seq(
            $.body_start,
            optional(choice(
                $.code_text,
                $.dialog_text
            )),
            $.line_end
        ),

        arguments: $ => seq(
            /\(/,
            $.identifier,
            repeat(
                seq(
                    /,/,
                    $.identifier
                )
            ),
            optional(/,/),
            /\)/
        ),

        other: $ => /[^\s\n\r\p{L}_]+/,
        vocabular: $ => /[\p{L}_-]+/,
        identifier: $ => /[\p{L}_]+/

    }
})
