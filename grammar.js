module.exports = grammar({
    name: "ink",
    extras: $ => [/[^\S\n\r]/],
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
                    $.choice_start
                    $.body_start,
                    $.knot_start,
                ),
                repeat(choice(
                    $.arrow,
                    $.minus,
                    $.other
                )),
                $.line_end
            )
        ),

        choice_start: $ => seq(
            $.body_start,
            /a/
        ),

        other: $ => prec(-1, /./),

    }
})
