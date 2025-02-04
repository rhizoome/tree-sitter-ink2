
#description: tree-sitter-ink demo

LIST Items = Hammer, Glass, Clock
CONST l = "love"
VAR three = 3
VAR found = false

-> شروع

=== شروع ===
This is شروع.

- (top)

<- thread
* (ink) I {l} ink
    <>.
* I {l} /* block-comment */ tree-sitter
    <>.
* There is 
    <> glue.
    Nice. ->top
* ->
    -> شروع.bye

- I {l} you too. -> top

= bye
Good bye {helper(three)}. #CLASS: red
-> END

=== thread ===
* [I {l} threads] 
    I love threads and wool. ->شروع.top

=== function helper(ref x) ===
~ return x + 1
