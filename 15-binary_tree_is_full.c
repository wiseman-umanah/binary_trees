#include "binary_trees.h"

int b_size(const binary_tree_t *tree)
{
	int size;

	size = 1;
	if (tree == NULL)
		return (0);
	size += b_size(tree->left);
	size += b_size(tree->right);
	return (size);
}

int binary_tree_is_full(const binary_tree_t *tree)
{
	int perfect;

	perfect = b_size(tree);
	if (perfect % 2 == 0)
		return (0);
	return (1);
}