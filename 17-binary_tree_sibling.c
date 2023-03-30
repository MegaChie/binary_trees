#include "binary_trees.h"
/**
 * binary_tree_sibling - check code.
 * @node: constant structure pointer
 * Return: 0 or function's value
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == 0 || node->parent == 0)   
	{
		return (0);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
