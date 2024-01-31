#include "binary_trees.h"

/**
 * binary_tree_sibling - Returns the sibling node
 * @node: the child node
 * Return: The sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	sibling = node->parent->left;
	if (sibling == NULL)
		return (NULL);
	if (node == sibling)
	{
		sibling = node->parent->right;
		if (sibling == NULL)
			return (NULL);
	}
	return (sibling);
}
