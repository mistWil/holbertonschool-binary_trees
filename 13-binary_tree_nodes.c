#include "binary_trees.h"

/**
 * binary_tree_nodes - Binary tree node
 * @tree: is a pointer to the root node of the tree to count the number
 * Return: the number of nodes in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree == NULL)
		return (0);

	count_left = binary_tree_nodes(tree->left);
	count_right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + count_left + count_right);
	}
	else
	{
		return (count_left + count_right);
	}
}
