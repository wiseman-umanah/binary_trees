#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates a tree to the left
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *t2;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	t2 = tree->right;
	tree->right = t2->left;

	if (t2->left != NULL)
		t2->left->parent = tree;

	t2->left = tree;
	t2->parent = tree->parent;
	tree->parent = t2;

	return (t2);
}
