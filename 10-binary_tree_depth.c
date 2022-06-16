#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 *
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *node = NULL;

	if (tree == NULL)
		return (0);

	node = tree->parent;
	while (node)
	{
		depth++;
		node = node->parent;
	}

	return (depth);
}
