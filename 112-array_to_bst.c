#include "binary_trees.h"

/**
 * array_to_bst - converts array to bst
 * @array: The array
 * @size: The size of the array
 * Return: returns the root node
*/

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root;

	root = NULL;
	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);
	return (root);
}
