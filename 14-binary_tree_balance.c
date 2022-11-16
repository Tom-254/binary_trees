#include "binary_trees.h"

/**
 * binary_tree_balance - finds the balance factor of a binary tree
 * @tree: the tree to find the balance factor of
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

}
