module.exports = grammar({
    name: "ink",
    word: $ => $.identifier,
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
                $.dialog_text
            )),
            $.line_end
        ),

        function: $ => seq(
            $.function_header,
            $.function_body
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

        other: $ => /[^\s\n\r\p{L}_]+/,
        vocabular: $ => /[\p{L}_-]+/,
        identifier: $ => /[\p{L}_]+/

    }
})
