#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size of the tree, 0 if tree == NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_children;
	size_t right_children;

	if (tree == NULL)
		return (0);

	left_children = binary_tree_size(tree->left);
	left_children++;
	right_children = binary_tree_size(tree->right);
	right_children++;
	return (left_children + right_children - 1);
}
