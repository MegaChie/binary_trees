#include "binary_trees.h"
/**
 * binary_tree_insert_right - check code.
 * @parent: structure pointer
 * @value: integer variable
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == 0)
	{
		return (NULL);

	}
	if (parent->right != 0)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
