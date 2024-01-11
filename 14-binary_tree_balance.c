#include "binary_trees.h"

/**
 * height - function that calculates height
 * @tree: the node
 * Return: Always 0
 */
int height(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (tree == NULL)
		return (0);
	height_left = height(tree->left);
	height_right = height(tree->right);
	return ((height_left > height_right ? height_left : height_right) + 1);

}

/**
 * binary_tree_balance - balancing function
 * @tree: the node
 * Return:  measures the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (tree == NULL)
		return (0);
	height_left = height(tree->left);
	height_right = height(tree->right);
	return (height_left - height_right);
}
