#include "binary_trees.h"

/**
 * bst_search - searches for a value in a bst
 * @tree: pointer to the root node
 * @value: value to search in the tree
 *
 * Return: pointer to the node containig a value = value
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return ((bst_t *)tree);
	else if (tree->n == value)
		return ((bst_t *)tree);
	else if (value > tree->n)
		return (bst_search(tree->right, value));
	else
		return (bst_search(tree->left, value));
	return (NULL);
}
