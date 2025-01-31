module.exports = grammar({
    name: "ink",
    extras: $ => [],
    conflicts: $ => [
        //[$.body],
        //[$.vocabular]
    ],
    externals: $ => [
        $.arrow,
        $.minus,
        $.body_start,
        $.knot_start,
        $.choice_start,
        $.line_end
    ],

    rules: {

        program: $ => repeat(
            seq(
                choice(
                    $.body_start,
                    $.knot_start,
                    $.choice_start
                ),
                repeat(choice(
                    $.arrow,
                    $.minus,
                    $.other
                )),
                $.line_end
            )
        ),

        other: $ => prec(-1, /./),

    }
})
