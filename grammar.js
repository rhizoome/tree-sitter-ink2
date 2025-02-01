module.exports = grammar({
    name: "ink",
    conflicts: $ => [
    ],
    externals: $ => [
        $.arrow,
        $.minus,
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
            $.knot_start,
            optional(/=+/),
            $.identifier,
            optional(/=+/),
            $.line_end,
            optional($.weave_body),
            repeat(
                $.stitch
            )
        ),

        stitch: $ => seq(
            $.stitch_start,
            $.identifier,
            $.line_end,
            $.weave_body,
        ),

        weave_body: $ => prec.right(repeat1($.weave_body_line)),

        weave_body_line: $ => seq(
            $.body_start,
            optional(choice(
                $.choice_text,
                $.code_text,
                $.dialog_text
            )),
            $.line_end
        ),

        function: $ => seq(
            $.function_start,
            optional(/=+/),
            $.identifier,
            optional(/=+/),
            $.line_end,
            $.function_body,
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


        choice_text: $ => seq(
            /[\+\*]/,
            $.text,
            optional($.divert)
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
            $.identifier
        ),

        other: $ => /[^\s\n\r\p{L}_]+/,
        vocabular: $ => prec.right(repeat1(
            choice(
                $.identifier,
                $.minus
            )
        )),
        identifier: $ => /[\p{L}_]+/

    }
})
