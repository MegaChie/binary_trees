#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check code.
 * @node: structure pointer
 * Return:
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == 0 || node->left != 0 || node->right != 0)
	{
		return (0);
	}
	return (1);
}
