#include "binary_trees.h"
#include <limits.h>

int isBSTUtil(const binary_tree_t *node, int min, int max);

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (isBSTUtil(tree, INT_MIN, INT_MAX));
}

/**
 * isBSTUtil - utility function to recursively check if a binary tree is a BST
 * @node: current node being checked
 * @min: minimum valid value for the current node
 * @max: maximum valid value for the current node
 * Return: 1 if the subtree rooted with node is a BST, and 0 otherwise
 */

int isBSTUtil(const binary_tree_t *node, int min, int max)
{
	if (node == NULL)
		return (1);
	if (node->n <= min || node->n >= max)
		return (0);
	return (isBSTUtil(node->left, min, node->n)
	&& isBSTUtil(node->right, node->n, max));
}
