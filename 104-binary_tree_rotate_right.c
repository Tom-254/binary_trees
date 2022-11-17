#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right rotation on a bt
 * @tree: pointer to root node
 * Return: pointer to new root node
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *y;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	y = tree->left;
	y->parent = tree->parent;
	tree->parent = y;
	tree->left = y->right;

	if (tree->left != NULL)
		tree->left->parent = tree;
	y->right = tree;
	return (y);
}
