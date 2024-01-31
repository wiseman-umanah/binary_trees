#include "binary_trees.h"


/**
 * num_of_elem - calculate the number of nodes in tree
 * @tree: the tree to use
 * Return: the size of the tree
*/

double num_of_elem(const binary_tree_t *tree)
{
	int num;

	if (tree == NULL)
		return (0);
	num = 0;
	num += num_of_elem(tree->left);
	num += num_of_elem(tree->right);
	num++;
	return (num);
}

/**
 * binary_tree_height - calculate the height of a tree
 * @tree: the tree to use
 * Return: the height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;
	int num;

	if (tree == NULL)
		return (0);
	num = num_of_elem(tree);
	height = log2((double)num);
	return (height);
}
