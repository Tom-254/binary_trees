#include "binary_trees.h"
/**
 * height - measures the hight of the tree
 * @tree:pointer to the root node of the tree
 * Return: 0 if tree is NULL else the hight
 */
int height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = height(tree->left);
	right = height(tree->right);
	if (left >= right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_balance - finds the balance factor of a binary tree
 * @tree: the tree to find the balance factor of
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree->left) - height(tree->right));

}
