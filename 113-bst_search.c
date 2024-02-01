#include "binary_trees.h"


/**
 * search - function to search data
 * @root: the root tree
 * @value: the value to search for
 * Return: returns the node search for
*/

bst_t *search(bst_t *root, int value)
{
	if (root == NULL || root->n == value)
		return (root);

	if (value < root->n)
		return (search(root->left, value));
	else
		return (search(root->right, value));
}


/**
 * bst_search - Dummy function
 * @tree: the tree to use
 * @value: the value to use
 * Return: returns the node search for
*/

bst_t *bst_search(const bst_t *tree, int value)
{
	return (search((bst_t *)tree, value));
}


