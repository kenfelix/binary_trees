#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree
 * using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int rear, front;
	binary_tree_t **queue;
	const binary_tree_t *temp;

	if (tree && func)
	{
		queue = create_queue(&front, &rear);
		temp = tree;

		while (temp)
		{
			func(temp->n);
			if (temp->left)
				enqueue(queue, &rear, temp->left);
			if (temp->right)
				enqueue(queue, &rear, temp->right);
			temp = dequeue(queue, &front);
		}
	}
}

/**
 * create_queue - creates a queue
 * @front: value of front
 * @rear: value of rear
 * Return: Double pointer to queue
 */
binary_tree_t **create_queue(int *front, int *rear)
{
	binary_tree_t **queue = malloc(sizeof(binary_tree_t));
	*front = *rear = 0;
	return (queue);
}

/**
 * enqueue - adds to queue
 * @queue: the queue
 * @rear: the rear
 * @new_node: to be added
 * Return: void
 */
void enqueue(binary_tree_t **queue, int *rear, binary_tree_t *new_node)
{
	queue[*rear] = new_node;
	(*rear)++;
}
/**
 * dequeue - removes from queue
 * @queue: the queue
 * @front: the front
 * Return: void
 */
binary_tree_t *dequeue(binary_tree_t **queue, int *front)
{
	(*front)++;
	return (queue[*front - 1]);
}
