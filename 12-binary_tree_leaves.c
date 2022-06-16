#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	number_of_leaves(tree, &count);

	return (count);
}

/**
 * number_of_leaves - Computes the number of leaves in a binary tree
 * @tree: A pointer to the root node of the tree
 * @count: a pointer to the number of leaves
 *
 * Return: void
 */
void number_of_leaves(const binary_tree_t *tree, size_t *count)
{
	if (tree == NULL)
		return;

	if (tree->left == NULL && tree->right == NULL)
		(*count)++;

	number_of_leaves(tree->left, count);
	number_of_leaves(tree->right, count);
}
