#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t res;

	res = 0;
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		res++;
	}
	
	return(res);
}
