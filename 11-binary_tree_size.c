#include "binary_trees.h"

/**
 * binary_tree_size - The size of the binary tree
 * @tree:  The binary tree to get the size from
 * Return: 0 if NULL, size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size = 1;
	if (tree == NULL)
		return (0);
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
