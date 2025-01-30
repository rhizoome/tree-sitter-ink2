const CATCH_ALL = -2;

module.exports = grammar({
    name: "ink",
    extras: $ => [],
    conflicts: $ => [
        [$.knot],
        [$.body],
    ],

    rules: {

        program: $ => seq(
            repeat($.knot),
            /\n/
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
                    field("text", $.text),
                    $.inline_logic
                )
            )
        ),

        identifier: $ => /\p{L}+/,
        knot_start: $ => /\n\s*={2,}=*\s*/,
        stitch_start: $ => /\n\s*=\s*/,
        text: $ => /[^\n{]+/,
        rest: $ => /[^\n]+/,
    }

})
