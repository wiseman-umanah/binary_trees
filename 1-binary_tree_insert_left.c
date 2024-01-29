#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node to the left
 * of a parent/existing node
 * @parent: The parent node to insert to left
 * @value: The value (int) to store in child node
 * Return: A pointer to the child node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);
	child->n = value;
	child->right = NULL;
	if (parent != NULL)
	{
		if (parent->left != NULL)
		{
			child->left = parent->left;
			parent->left->parent = child;
			parent->left = child;
			child->parent = parent;
		}
		else
		{
			child->parent = parent;
			parent->left = child;
			child->left = NULL;
		}
		return (child);
	}
	return (NULL);
}
