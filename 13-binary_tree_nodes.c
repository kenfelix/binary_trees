#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: a pointer to the root node of the tree
 *
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	number_of_nodes(tree, &count);

	return (count);
}

/**
 * number_of_nodes - Computes the number of nodes with at least 1 child
 * @tree: a pointer to the root node of the tree
 * @count: keeps the count of nodes with at least 1 child
 *
 * Return: void
 */
void number_of_nodes(const binary_tree_t *tree, size_t *count)
{
	if (tree == NULL)
		return;

	if (tree->left || tree->right)
		(*count)++;

	number_of_nodes(tree->left, count);
	number_of_nodes(tree->right, count);
}
