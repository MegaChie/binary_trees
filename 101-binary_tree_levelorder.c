#include "binary_trees.h"
/**
 * create_node - check code.
 * @node: structure pointer
 * Return: 0 or new's value
 */
levelorder_queue_t *create_node(binary_tree_t *node)
{
	levelorder_queue_t *new;

	new = malloc(sizeof(levelorder_queue_t));
	if (new == 0)
	{
		return (0);
	}
	new->node = node;
	new->next = 0;
	return (new);
}

/**
 * free_queue - check code.
 * @head: structure pointer
 */
void free_queue(levelorder_queue_t *head)
{
	levelorder_queue_t *tmp;

	while (head != 0)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

/**
 * pintPush - check code.
 * @node: structure pointer
 * @head: structure pointer
 * @tail: structure double pointer
 * @func: some kind of magic
 */
void pintPush(binary_tree_t *node, levelorder_queue_t *head,
		levelorder_queue_t **tail, void (*func)(int))
{
	levelorder_queue_t *new;

	func(node->n);
	if (node->left != 0)
	{
		new = create_node(node->left);
		if (new == 0)
		{
			free_queue(head);
			exit(1);
		}
		(*tail)->next = new;
		*tail = new;
	}
	if (node->right != 0)
	{
		new = create_node(node->right);
		if (new == 0)
		{
			free_queue(head);
			exit(1);
		}
		(*tail)->next = new;
		*tail = new;
	}
}

/**
 * pop - check code.
 * @head: structure double pointer
 */
void pop(levelorder_queue_t **head)
{
	levelorder_queue_t *tmp;

	tmp = (*head)->next;
	free(*head);
	*head = tmp;
}

/**
 * binary_tree_levelorder - check code.
 * @tree: constant structure pointer
 * @func: some kind of magic
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	levelorder_queue_t *head, *tail;

	if (tree == 0 || func == 0)
	{
		return;
	}
	head = tail = create_node((binary_tree_t *)tree);
	if (head == 0)
	{
		return;
	}
	while (head != 0)
	{
		pintPush(head->node, head, &tail, func);
		pop(&head);
	}
}
