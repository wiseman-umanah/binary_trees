#include "binary_trees.h"

/**
 * binary_tree_balance - checks if tree is balanced
 * @tree:  root of the binary tree to check balance for
 * Return: 0 if empty, -1 if partially filled, 2 if complete
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else if (tree->left == NULL || tree->right == NULL)
		return (-1);
	else
		return (2);
}
