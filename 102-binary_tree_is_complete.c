#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the input root address
 * Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}

/**
 * checker - check if its complete
 * @tree: the input root address
 * @index: index of where the node is
 * @size: size of the tree
 * Return: 1 if complete 0 if not
 */
int checker(const binary_tree_t *tree, size_t index, size_t size)
{
	if (tree == NULL)
		return (1);
	if (index >= size)
		return (0);
	return (checker(tree->left, index * 2 + 1, size) &&
		checker(tree->right, index * 2 + 2, size));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: the input root address
 * Return: 1 if complete 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t index, size;

	if (tree == NULL)
		return (0);
	index = 0;
	size = binary_tree_size(tree);
	return (checker(tree, index, size));
}
