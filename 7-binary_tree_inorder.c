#include "binary_trees.h"

/**
 * binary_tree_inorder - calculate the number of nodes in tree
 * @tree: the tree to use
 * @func: The print function
 * Return: the size of the tree
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
