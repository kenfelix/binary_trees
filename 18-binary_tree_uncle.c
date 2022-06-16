#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_p;

	if (!node)
		return (NULL);

	parent = node->parent;
	if (!parent)
		return (NULL);

	grand_p = parent->parent;
	if (!grand_p)
		return (NULL);

	if (grand_p->left != parent)
		return (grand_p->left);
	if (grand_p->right != parent)
		return (grand_p->right);

	return (NULL);
}
