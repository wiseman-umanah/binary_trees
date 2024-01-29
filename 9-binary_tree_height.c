#include "binary_trees.h"


double num_of_elem(const binary_tree_t *tree)
{
	int num;

	if (tree == NULL)
		return (0);
	num = 0;
	num += num_of_elem(tree->left);
	num += num_of_elem(tree->right);
	num++;
	return(num);
}

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