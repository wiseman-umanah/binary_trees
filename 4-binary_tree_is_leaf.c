#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function to check if node is a leaf
 * @node: the node to verify
 * Return: 0 if true, 1 if node is not a leaf
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leafnum;

	leafnum = 0;

	if (node != NULL)
	{
		if (node->left != NULL)
			leafnum = 0;
		else if (node->right != NULL)
			leafnum = 0;
		else
			leafnum = 1;
	}
	return (leafnum);
}
