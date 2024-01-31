#include "binary_trees.h"

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *temp;

	if (first || second)
		return (NULL);
	temp = first->parent;
	/*while (temp)
	{
		if (temp == second->parent)
			return (temp);
		temp = temp->parent;
	}*/
	temp = second->parent;
	while (temp)
	{
		if (temp == first->parent)
			return (temp);
		temp = temp->parent;
	}
	return (NULL);
}
