#include "binary_trees.h"


/**
 * binary_tree_rotate_left - rotates tree left
 * @tree: the tree
 * Return: return pointer to the new tree
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *t2;

	t2 = tree->right;
	tree->right = t2->left;
	t2->left = tree;
	tree->parent = t2;
	t2->parent = NULL;
	return (t2);
}
