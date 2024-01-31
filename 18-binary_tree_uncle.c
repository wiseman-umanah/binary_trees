#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	uncle = node->parent->parent->left;
	if (uncle == NULL)
		return (NULL);
	if (node->parent == uncle)
	{
		uncle = node->parent->parent->right;
		if (uncle == NULL)
			return (NULL);
	}
	return (uncle);
}
