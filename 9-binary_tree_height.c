#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a particular node
 * @tree: the node to find the height of
 * Return: ldepth if it is the largest node length or rdepth if not
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
