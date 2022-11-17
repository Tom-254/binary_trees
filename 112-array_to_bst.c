#include "binary_trees.h"

/**
 * array_to_bst - builds a bst from an array
 * @array: poiter to the first element of the array
 * @size: numebr of elements in the array
 *
 * Return: pointer to root node of created BST
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i = 0;

	if (array == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		bst_insert(&root, array[i]);
		i++;
	}
	return (root);
}
