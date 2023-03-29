#include "binary_trees.h"
/**
 * binary_tree_insert_right - check code.
 * @parent: structure pointer
 * @value: integer variable
 * Return: NULL or pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == 0)
	{
		return (NULL);

	}
	new = binary_tree_node(parent, value);
	if (parent->right != 0)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
