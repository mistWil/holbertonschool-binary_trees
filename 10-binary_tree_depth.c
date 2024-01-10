#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: Depth of a node in a binary tree or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
