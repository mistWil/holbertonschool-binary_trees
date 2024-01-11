#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if the tree or 0 if  full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL || tree->right != NULL) ||
	(tree->left != NULL || tree->right == NULL))
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		return (1);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	return (0);
}
