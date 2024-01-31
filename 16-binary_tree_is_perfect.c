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
