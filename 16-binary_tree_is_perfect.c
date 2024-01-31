#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of the tree
 * @node:  node to start from
 * Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth = 0;

	while (node != NULL)
	{
		depth++;
		node = node->left;
	}
	return (depth);
}

/**
 * is_perfect - checks if a binary tree is perfect or not
 * @tree: the tree to use
 * @depth: the depth
 * @level: the level
 * Return: the depth
*/
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect(tree->left, depth, level + 1) &&
		   is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - 0 is not perfect
 * @tree: the tree
 * Return: 1 if true, 0 if false
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = binary_tree_depth(tree);

	return (is_perfect(tree, d, 0));
}
