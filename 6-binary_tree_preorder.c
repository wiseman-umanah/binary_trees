#include "binary_trees.h"

/**
 * binary_tree_preorder - prints tree data in preorder
 * @tree: the tree to use
 * @func: the print function
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
