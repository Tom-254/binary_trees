#include "binary_trees.h"

/**
 * isBSTUtil - traverses down the tree keeping track of narrowing min and max allowed values looking ateach node only once
 * @tree: pointer to root node
 * @min: min value
 * @max: max value
 * Return: true if given tree is a BST and values are >= min and <= max
 */

int isBSTUtil(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (isBSTUtil(tree->left, min, tree->n - 1)
		&&
		isBSTUtil(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst - checks if a bt is a valid BST
 * @tree: pointer to the root node
 * Return: 1 if tree is a  BST
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (isBSTUtil(tree, INT_MIN, INT_MAX));
}
