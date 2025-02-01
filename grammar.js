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
        $.line_end
    ],

    rules: {

        program: $ => seq(
            optional($.body),
            repeat(
                $.knot,
            )
        ),

        knot: $ => seq(
            $.knot_start,
            $.text,
            $.line_end,
            optional($.body),
            repeat(
                $.stitch
            )
        ),

        stitch: $ => seq(
            $.stitch_start,
            $.text,
            $.line_end,
            $.body,
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

        choice_text: $ => seq(
            /[\+\*]/,
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
            $.vocabular,
            $.other
        )),

        other: $ => /./,
        vocabular: $ => prec.right(repeat1(
            choice(
                /[\p{L}_]+/,
                $.minus, "-"
            )
        )),

    }
})
