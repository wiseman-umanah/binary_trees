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
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree:  the tree to check
 * Return: true if it's a perfect binary tree, false otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int num, i, res, height;

	res = 1;
	if (tree == NULL)
		return (0);
	num = num_of_elem(tree);
	height = log2((double)num);
	height++;
	for (i = 0; i < height; i++)
		res *= 2;
	if (res - 1 != num)
		return (0);
	else
		return (1);
}
