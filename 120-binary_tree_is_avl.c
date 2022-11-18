#include "binary_trees.h"

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL tree
 * @tree: pointer to the root node
 *
 * Return: 1 if tree is al
 */

int binary_tree_is_avl(const binary_tree_t *tree)
{
	int lh;
	int rh;

	if (tree == NULL)
		return (1);

	lh = bt_height(tree->left);
	rh = bt_height(tree->right);

	if (abs(lh - rh) < 1 && binary_tree_is_avl(tree->left)
			&& binary_tree_is_avl(tree->right))
		return (1);
	return (0);
}
