#include "binary_trees.h"

/**
 * binary_tree_nodes - the  number of nodes in a binary tree
 * @tree:  pointer to the root node of the binary tree
 * Return:  the number of nodes if it exists, otherwise 0
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	nodes = 0;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		nodes++;
	else
	{
		binary_tree_nodes(tree->left);
		binary_tree_nodes(tree->right);
	}
	return (1);
}
