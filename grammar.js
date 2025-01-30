module.exports = grammar({
    name: "ink",
    extras: $ => [],
    conflicts: $ => [
        [$.knot],
        [$.body],
        [$.dialog],
        [$.dialog, $.program],
    ],

    rules: {

        program: $ => seq(
            optional($.body),
            repeat($.knot),
            repeat(/\n/)
        ),

        knot: $ => seq(
            $.knot_start,
            field("name", $.identifier),
            optional($.rest),
            optional($.body)
        ),

        body: $ => repeat1(
            choice(
                $.stitch,
                $.dialog
            )
        ),

        stitch: $ => seq(
            $.stitch_start,
            field("name", $.identifier),
            optional($.rest)
        ),

        inline_logic: $ => seq(
            "{",
            /[^}]+/,
            "}"
        ),

        dialog: $ => seq(
            /\n/,
            repeat1(
                choice(
                    /\n/,
                    $.inline_logic,
                    field("text", repeat1(
                        choice(
                            "-",
                            $.text
                        )
                    )),
                )
            ),
            optional($.divert)
        ),

        divert: $ => seq(
            $.divert_start,
            $.identifier
        ),

        divert_start: $ => /->\s*/,
        identifier: $ => /\p{L}+/,
        knot_start: $ => /\n\s*={2,}=*\s*/,
        stitch_start: $ => /\n\s*=\s*/,
        text: $ => /[^\n{-]+/,
        rest: $ => /[^\n]+/,
    }

})
