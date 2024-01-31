#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the ancestor of 2 nodes
 * @fir: the first node
 * @sec: the second node
 * Return: the ancestor node
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *fir, const binary_tree_t *sec)
{
	binary_tree_t *temp;

	if (fir || sec)
		return (NULL);
	temp = fir->parent;
	/*while (temp)
	{
		if (temp == sec->parent)
			return (temp);
		temp = temp->parent;
	}*/
	temp = sec->parent;
	while (temp)
	{
		if (temp == fir->parent)
			return (temp);
		temp = temp->parent;
	}
	return (NULL);
}
