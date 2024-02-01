#include "binary_trees.h"

/**
 * minNode - finds the smallest node
 * @node: the node to compare
 * Return: the smallest node
*/

bst_t *minNode(bst_t *node)
{
	bst_t *current = node;

	while (current && current->left != NULL)
		current = current->left;

	return (current);
}

/**
 * bst_remove - Removes the node with value
 * @root: the root node
 * @value: the value to remove
 * Return: returns the root node with the removed node
*/

bst_t *bst_remove(bst_t *root, int value)
{
	if (root == NULL)
		return (NULL);
	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left == NULL)
		{
			bst_t *temp = root->right;

			free(root);
			return (temp);
		}
		else if (root->right == NULL)
		{
			bst_t *temp = root->left;

			free(root);
			return (temp);
		}
		bst_t *temp = minNode(root->right);

		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}
	return (root);
}
