#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a bst
 * @tree: double pointer to root node of BST
 * @value: value to store in node
 * Return: pointer to created node or NULL
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *x = *tree;

	if (tree == NULL)
		return (NULL);
	if (x == NULL)
		return (binary_tree_node(x, value));

	if (value < x->n)
	{
		if (x->left == NULL)
		{
			x->left = binary_tree_node(x, value);
			return (x->left);
		}
		return (bst_insert(&(x->left), value));
	}
	else if (value > x->n)
	{
		if (x->right == NULL)
		{
			x->right = binary_tree_node(x, value);
			return (x->right);
		}
		return (bst_insert(&(x->right), value));
	}
	return (NULL);
}
