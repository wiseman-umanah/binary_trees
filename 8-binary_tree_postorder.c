#include "binary_trees.h"

/**
 * binary_tree_postorder - print tree in post order method
 * @tree: the tree to use
 * @func: the print function
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);

}
