#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of
 * another node.
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent != NULL)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node != NULL)
		{
			new_node->right = parent->right;
			new_node->n = value;
			new_node->left = NULL;
			new_node->parent = parent;

			if (parent->right != NULL)
				parent->right->parent = new_node;
			parent->right = new_node;
		}
	}

	return (new_node);
}
