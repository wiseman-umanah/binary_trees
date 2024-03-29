#include "binary_trees.h"

/**
 * b_size - the size of tree
 * @tree: the tree to use
 * Return: return the size
*/

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


/**
 * binary_tree_is_full - Checks if tree is full
 * @tree:  Binary Tree to be checked
 * Return: 1 if the tree is full, otherwise returns 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int perfect;

	perfect = b_size(tree);
	if (perfect % 2 == 0)
		return (0);
	return (1);
}
