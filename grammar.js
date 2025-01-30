module.exports = grammar({
    name: "ink",
    conflicts: $ => [
        [$.body],
        [$.vocabular]
    ],
    externals: $ => [
        $.arrow,
        $.minus,
        $.body_start,
        $.knot_start,
        $.choice_start,
        $.empty_line,
        $.line_end
    ],

    rules: {

        program: $ => repeat(
            choice(
                $.body,
                //$.knot,
                $.empty_line
            )
        ),

        knot: $ => seq(
            $.knot_start,
            /\s*===*\s/,
            $.identifier
        ),

        body: $ => repeat1(
            choice(
                $.paragraph,
                //$.dialog_line,
            )
        ),

        paragraph: $ => seq(
            $.body_start,
            $.text_line,
            $.line_end
        ),

        dialog_line: $ => seq(
            $.choice_start,
            /\s*\*/,
            $.text_line,
        ),

        text_line: $ => repeat1(
            choice(
                $.arrow,
                $.vocabular
            )
        ),

        vocabular: $ => repeat1(
            choice(
                /[\p{L}_]+/,
                $.minus, "-"
            )
        ),

        identifier: $ => /[\p{L}_]+/,

        //program: $ => seq(
        //    optional($.body),
        //    repeat($.knot),
        //    repeat(/\n/)
        //),

        //knot: $ => seq(
        //    $.knot_start,
        //    field("name", $.identifier),
        //    optional($.rest),
        //    optional($.body)
        //),

        //body: $ => repeat1(
        //    choice(
        //        $.stitch,
        //        $.dialog
        //    )
        //),

        //stitch: $ => seq(
        //    $.stitch_start,
        //    field("name", $.identifier),
        //    optional($.rest)
        //),

        //inline_logic: $ => seq(
        //    "{",
        //    /[^}]+/,
        //    "}"
        //),

        //dialog: $ => seq(
        //    /\n/,
        //    repeat1(
        //        choice(
        //            /\n/,
        //            $.inline_logic,
        //            field("text", repeat1(
        //                choice(
        //                    "-",
        //                    $.text
        //                )
        //            )),
        //        )
        //    ),
        //    optional($.divert)
        //),

        //divert: $ => seq(
        //    $.divert_start,
        //    $.identifier
        //),

        //divert_start: $ => /->\s*/,
        //identifier: $ => /\p{L}+/,
        //knot_start: $ => /\n\s*={2,}=*\s*/,
        //stitch_start: $ => /\n\s*=\s*/,
        //text: $ => /[^\n{-]+/,
        //rest: $ => /[^\n]+/,
    }

})
