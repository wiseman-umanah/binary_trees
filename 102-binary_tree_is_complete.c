#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if tree is complete
 * @tree: tree is complete
 * Return: 1 if complete, 0 if incomplete
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	size = 1;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		size += binary_tree_is_complete(tree->left);
		size += binary_tree_is_complete(tree->right);
	}
	else
		return (size);
	return (size);
}
