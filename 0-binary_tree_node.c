#include "binary_trees.h"


/**
 * binary_tree_node - Creates new tree from nodes
 * @parent: The parent node to insert or create
 * @value: The value (int) to store in child node
 * Return: A pointer to the child node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);
	child->n = value;
	child->left = NULL;
	child->right = NULL;
	if (parent != NULL)
	{
		child->parent = parent;
		if (parent->left == NULL)
			parent->left = child;
		else
			parent->right = child;
	}
	else
		child->parent = NULL;
	return (child);
}
