const WS = /[ \t\v\f\u00A0\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2007\u2008\u2009\u200A\u2028\u2029\u202F\u205F\u3000]/;

/* Note
- PLEASE remember that repeat($.line_start, $.catch_all, $.line_end) can also
  match on previous line!! So the catch_all has always to exclude the block-end
  character
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
    extras: $ => [
        WS,
        $.block_comment,
        $.line_comment
    ],
    conflicts: $ => [
    ],
    externals: $ => [
        $.arrow,
        $.double_arrow,
        $.block_comment_start,
        $.block_comment_end,
        $.line_comment,
        $.glue,
        $.line_start,
        $.stitch_start,
        $.knot_start,
        $.function_start,
        $.var_start,
        $.const_start,
        $.list_start,
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

        block_comment: $ => seq(
            $.block_comment_start,
            repeat(choice(
                /[^*]/,
                /\*[^/]/
            )),
            $.block_comment_end
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
                $.var_line,
                $.const_line,
                $.list_line,
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
                $.condition_text,
            )),
            $.line_end
        ),

        function: $ => seq(
            $.function_header,
            optional($.weave_body) // actually not optional
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

        var_line: $ => seq(
            $.var_start,
            $.identifier,
            $.assignment,
            $.value,
            $.line_end
        ),

        const_line: $ => seq(
            $.const_start,
            $.identifier,
            $.assignment,
            $.value,
            $.line_end
        ),

        list_line: $ => seq(
            $.list_start,
            $.identifier,
            $.assignment,
            $.list,
            $.line_end
        ),

        list: $ => seq(
            $.marked_identifier,
            repeat(
                seq(
                    /,/,
                    $.marked_identifier
                )
            ),
            optional(/,/),
        ),

        marked_identifier: $ => seq(
            optional($.mark_start),
            $.identifier,
            optional($.mark_end),
        ),
        mark_start: $ => /\(/,
        mark_end: $ => /\)/,

        dialog_text: $ => choice(
            $.text,
            $.divert_chain,
            seq($.text, $.divert_chain)
        ),

        // TODO inline code goes here
        text: $ => repeat1(choice(
            $.inline_block,
            $.vocabular,
            $.other
        )),

        divert_chain: $ => choice(
            $.divert_return,
            seq(
                repeat1(
                    $.divert
                ),
                optional($.divert_continue),
                optional($.divert_return)
            )
        ),
        divert: $ => seq(
            $.arrow,
            $.identifier_path,
        ),
        divert_continue: $ => $.arrow,
        divert_return: $ => $.double_arrow,

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

        arguments: $ => seq(
            $.value,
            repeat(
                seq(
                    /,/,
                    $.value
                )
            ),
            optional(/,/),
        ),

        condition_text: $ => seq(
            $.condition_block,
            optional($.text)
        ),

        // TODO parse code within condition block
        condition_block: $ => seq(
            /\{/,
            optional($.block_remainder),
            $.line_end,
            repeat(
                seq(
                    $.line_start,
                    optional($.block_remainder),
                    $.line_end
                )
            ),
            $.line_start,
            /\}/
        ),

        // TODO parse code within inline block
        inline_block: $ => seq(
            /\{/,
            optional($.block_remainder),
            /\}/
        ),

        identifier_path: $ => seq(
            $.identifier,
            optional(seq(
                $.dot,
                $.identifier
            ))
        ),

        value: $ => choice(
            $.string,
            $.identifier
        ),
        string: $ => seq(
            '"',
            repeat(choice(
                /[^"\\\n\r]/,
                /\\./
            )),
            '"'
        ),
        assignment: $ => /=/,
        dot: $ => /\./,
        block_remainder: $ => /[^\r\n\}]+/,
        other: $ => /[^\s\n\r\p{N}\p{L}_]+/,
        vocabular: $ => /[\p{N}\p{L}_-]+/,
        identifier: $ => /[\p{N}\p{L}_]+/

    }
})
