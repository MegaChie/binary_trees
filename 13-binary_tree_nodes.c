#include "binary_trees.h"
/**
 * binary_tree_nodes - check code.
 * @tree: constant structure pointer
 * Return: nodes's value
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		binary_tree_nodes(tree->left);
		binary_tree_nodes(tree->right);
	}
	return (nodes);
}
