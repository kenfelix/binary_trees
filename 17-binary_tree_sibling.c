#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to sibling node else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);
	parent = node->parent;
	if (parent->left && parent->left != node)
		return (parent->left);
	if (parent->right && parent->right != node)
		return (parent->right);
	return (NULL);
}
