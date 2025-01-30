src/parser.c: grammar.js
	tree-sitter generate

.PHONY: test
test: src/parser.c
	tree-sitter test
