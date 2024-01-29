#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return(0);
	else if (tree->left == NULL || tree->right == NULL)
		return(-1);
	else
		return(2);
}
