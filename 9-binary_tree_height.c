#include "binary_trees.h"

/**
 * node_height - Computes the height of a binary tree's node
 * @tree: The binary tree
 * @n: The accumulated height
 * @height: A pointer to the maximum height in the node's tree
 * Return: void
 */
void node_height(const binary_tree_t *tree, size_t n, size_t *height)
{
	if (tree == NULL)
		return;

	if (!tree->left && !tree->right)
	{
		if (n > *height)
			*height = n;
	}
	else
	{
		node_height(tree->left, n + 1, height);
		node_height(tree->right, n + 1, height);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: if @tree == NULL 0, else height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	node_height(tree, 0, &height);
	return (height);
}
