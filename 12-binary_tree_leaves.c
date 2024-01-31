#include "binary_trees.h"


/**
 * binary_tree_leaves -  count the number of leaves in a binary tree
 * @tree:  pointer to the root node of the binary tree
 * Return:  The number of leaves in the binary tree or -1 on failure
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	leaves = 0;
	if (tree == NULL)
		return (0);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	if (tree->left && tree->right)
		return (leaves++);

}
