#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check node leaf or not
 * @node: node to check
 * Return: 1 if node if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node->left == NULL && node->right == NULL ? 1 : 0);
}

/**
 * binary_tree_is_full -  checks if a binary tree is full
 * @tree: a pointer to root node of the tree to check if full
 * Return: return 1 for success
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree) != 0)
		return (1);

	if (binary_tree_is_full(tree->left) == 0 ||
		binary_tree_is_full(tree->right) == 0)
		return (0);
	return (1);
}
