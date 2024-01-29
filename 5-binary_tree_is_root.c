#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is a root of a tree
 * @node: The node to verify
 * Return: 1 if node is root, 0 if not
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	int rootnum;

	rootnum = 0;
	if (node != NULL)
	{
		if (node->parent == NULL)
			rootnum = 1;
	}
	return (rootnum);
}
