const WS = /[ \t\v\f\u00A0\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2007\u2008\u2009\u200A\u2028\u2029\u202F\u205F\u3000]/;

/* Note
- In ink line-endings are significant in many places, therefore we have to handle
  line-endings throughout the grammar
- Where it is possible without adding complications, clear error or confusion,
  we keep the grammar more flexible than the ink-language
    - Because it is difficult to correctly lint parse-errors
    - Examples of the grammar being more flexible:
        - Function-, knot- and stitch-bodies are the same
            - Diverts in functions are allow
        - Function and stitch bodies are optional
*/

module.exports = grammar({
    name: "ink",
    extras: $ => [WS],
    conflicts: $ => [
    ],
    externals: $ => [
        $.arrow,
        $.line_start,
        $.stitch_start,
        $.knot_start,
        $.function_start,
        $.empty_line,
        $.line_end
    ],

    rules: {

        program: $ => prec(1, seq(
            optional(alias($.empty_line, "")),
            optional($.weave_body),
            repeat(
                choice(
                    $.knot,
                    $.function
                )
            )
        )),

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
            optional($.weave_body), // actually not optional
        ),

        stitch_header: $ => seq(
            $.stitch_start,
            $.identifier,
            $.line_end,
        ),

        weave_body: $ => prec.right(repeat1(
            choice(
                $.weave_body_line,
                alias($.empty_line, "")
            )
        )),

        weave_body_line: $ => seq(
            $.line_start,
            optional(choice(
                $.choice_text,
                $.code_text,
                $.dialog_text,
                $.gather_text,
                $.condition_block
            )),
            $.line_end
        ),

        function: $ => seq(
            $.function_header,
            optional($.function_body) // actually not optional
        ),

        gather_text: $ => seq(
            $.gather_mark,
            optional($.dialog_text)
        ),

        gather_mark: $ => repeat1(
            /-/,
        ),

        choice_text: $ => seq(
            $.choice_mark,
            optional($.dialog_text)
        ),

        choice_mark: $ => repeat1(
            /[\+\*]/,
        ),

        code_text: $ => seq(
            /~/,
            $.text,
        ),

        dialog_text: $ => choice(
            $.text,
            $.divert,
            seq($.text, $.divert)
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
            optional(/\(/),
            optional($.arguments),
            optional(/\)/),
            optional(/=+/),
            $.line_end
        ),

        function_body: $ => prec.right(repeat1(
            choice(
                $.function_body_line,
                alias($.empty_line, "")
            )
        )),

        function_body_line: $ => seq(
            $.line_start,
            choice(
                $.code_text,
                $.dialog_text
            ),
            $.line_end
        ),

        arguments: $ => seq(
            $.identifier,
            repeat(
                seq(
                    /,/,
                    $.identifier
                )
            ),
            optional(/,/),
        ),

        condition_block: $ => seq(
            /\{/,
            optional($.rest),
            $.line_end,
            repeat(
                seq(
                    $.line_start,
                    optional($.rest),
                    $.line_end
                )
            ),
            $.line_start,
            /\}/,
            optional($.rest),
        ),

        any: $ => /[^\r\n]/,
        rest: $ => /[^\r\n]+/,
        other: $ => /[^\s\n\r\p{N}\p{L}_]+/,
        vocabular: $ => /[\p{N}\p{L}_-]+/,
        identifier: $ => /[\p{N}\p{L}_]+/

    }
})
