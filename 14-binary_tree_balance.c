#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a particular node
 * @tree: the node to find the height of
 * Return: height of the binary tree
 */
int binary_tree_height(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

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
