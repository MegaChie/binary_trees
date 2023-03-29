#include "binary_trees.h"
/**
 * binary_tree_is_root - check code.
 * @node: structure pointer
 * Return: 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == 0 || node->parent != 0)
	{
		return (0);
	}
	return (1);
}
