#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to root node
 * Return: pointer to the new root node after rotation
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *y;

	if (tree == NULL || tree->right == NULL)
		return (tree);
	y = tree->right;
	y->parent = tree->parent;
	tree->parent = y;
	tree->right = y->left;
	
	if (tree->right != NULL)
	{
		tree->right->parent = tree;
	}
	y->left = tree;
	return (y);
}
