#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates tree left
 * @tree: the tree
 * Return: return pointer to the new tree
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *t2;

	t2 = tree->left;
	tree->left = t2->right;
	if (t2->right != NULL)
		t2->right->parent = tree;
	t2->right = tree;
	tree->parent = t2;
	t2->parent = NULL;

	return (t2);
}
