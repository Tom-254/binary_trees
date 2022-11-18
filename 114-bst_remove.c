#include "binary_trees.h"

/**
 * getRightMin - find min value in right subtree
 * @root: pointer to root node
 * Return: min
 */
int getRightMin(bst_t *root)
{
	bst_t *temp = root;

	while (temp->left != NULL)
		temp = temp->left;
	return (temp->n);
}


/**
 * bst_remove - removes a node from a BST
 * @root: pointer to the root node
 * @value: value to remove in a tree
 *
 * Return: pointer to the new root node
 */

bst_t *bst_remove(bst_t *root, int value)
{
	int rightMin;
	bst_t *temp;

	if (root == NULL)
		return (NULL);
	if (root->n < value)
		root->right = bst_remove(root->right, value);
	else if (root->n > value)
		root->left = bst_remove(root->left, value);
	else
	{
		if (root->left == NULL && root->right == NULL)
		{
			free(root);
			return (NULL);
		}
		else if (root->left == NULL)
		{
			temp = root->right;
			free(root);
			return (temp);
		}
		else if (root->right == NULL)
		{
			temp = root->left;
			free(root);
			return (temp);
		}
		else
		{
			rightMin = getRightMin(root->right);
			root->n = rightMin;
			root->right = bst_remove(root->right, rightMin);
		}
	}
	return (root);
}
