; tags and labels
(tag_delimiter) @keyword
(label) @function
(tag (identifier) @type)
(tag) @type

; values
(identifier) @function
(string) @string
(boolean) @constant
(number) @constant

; headers
(knot_header) @keyword
(stitch_header) @keyword
(function_header) @keyword

; marks (ink)
(option_mark) @keyword.directive
(gather_mark) @type.builtin
(glue) @type.builtin

; calls
(divert_cr_thread) @function

; operators
(assignment) @operator

; special operators (ink)
(arrow) @keyword.directive
(double_arrow) @keyword.directive
(dot) @keyword.directive
(mark_start) @keyword.directive
(mark_end) @keyword.directive
(hide_start) @keyword.directive
(hide_end) @keyword.directive

; declarations
(var_line) @attribute
(const_line) @constant
(list_line) @type

; comments
(line_comment) @comment
(block_comment) @comment

; unparsed code
(inline_block) @keyword
(condition_block) @keyword
(code_text) @keyword


(ERROR) @error
