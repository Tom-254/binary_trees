#include "binary_trees.h"

/**
 * bt_height - measures the height of a bt
 * @tree: pointer to the root node
 * ReturnL height
 */
size_t bt_height(const binary_tree_t *tree)
{
	size_t ls, rs;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	ls = bt_height(tree->left);
	rs = bt_height(tree->right);
	if (ls < rs)
		return (rs + 1);
	return (ls + 1);
}

/**
 * prints - prints out the level
 * @tree: input root address
 * @func: pointer to a fn to call for each node
 * @level: height of node to be printed
 */
void prints(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		prints(tree->left, func, level - 1);
		prints(tree->right, func, level - 1);
	}
}


/**
 * binary_tree_levelorder - goes through a bt using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, i = 1;

	if (tree == NULL || func == NULL)
		return;
	h = bt_height(tree) + 1;

	while (i <= h)
	{
		prints(tree, func, i);
		i++;
	}
}
