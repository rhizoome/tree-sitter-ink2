module.exports = grammar({
    name: "ink",
    conflicts: $ => [
    ],
    externals: $ => [
        $.arrow,
        $.minus,
        $.body_start,
        $.knot_start,
        $.line_end
    ],

    rules: {

        program: $ => repeat(
            seq(
                choice(
                    $.body,
                    $.knot,
                )
            )
        ),

        body: $ => prec.right(repeat1($.body_line)),

        body_line: $ => seq(
            $.body_start,
            optional(choice(
                $.choice_text,
                $.code_text,
                $.dialog_text
            )),
            $.line_end
        ),

        knot: $ => seq(
            $.knot_start,
            $.text,
            $.line_end,
            $.body
        ),

        choice_text: $ => seq(
            /\+/,
            $.text,
        ),

        code_text: $ => seq(
            /~/,
            $.text,
        ),

        dialog_text: $ => seq(
            $.text,
        ),

        text: $ => repeat1(choice(
            $.arrow,
            $.minus,
            $.other
        )),

        other: $ => prec(-1, /./),

    }
})
