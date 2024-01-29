#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node to the right
 * of a parent/existing node
 * @parent: The parent node to insert to right
 * @value: The value (int) to store in child node
 * Return: A pointer to the child node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);
	child->n = value;
	child->left = NULL;
	if (parent != NULL)
	{
		if (parent->right != NULL)
		{
			child->right = parent->right;
			parent->right->parent = child;
			parent->right = child;
			child->parent = parent;
		}
		else
		{
			child->parent = parent;
			parent->right = child;
			child->right = NULL;
		}
		return (child);
	}
	return (NULL);
}
