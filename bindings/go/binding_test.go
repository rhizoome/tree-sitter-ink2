package tree_sitter_ink_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_ink "github.com/rhizoome/tree-sitter-ink/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ink.Language())
	if language == nil {
		t.Errorf("Error loading Ink grammar")
	}
}
