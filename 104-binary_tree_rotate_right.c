#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates a tree to the right
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root of the tree after rotation
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *t2;

	if (!tree || !tree->left)
		return (tree);
	t2 = tree->left;
	tree->left = t2->right;
	if (t2->right != NULL)
		t2->right->parent = tree;
	t2->right = tree;
	t2->parent = tree->parent;
	if (tree->parent)
	{
		if (tree->parent->left == tree)
			tree->parent->left = t2;
		else if (tree->parent->right == tree)
			tree->parent->right = t2;
	}
	tree->parent = t2;
	return (t2);
}
