#include "binary_trees.h"
/**
 * binary_tree_balance - check code.
 * @tree: constant structure pointer
 * Return: value or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - check code.
 * @tree: constant structure pointer
 * Return: value or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t leftey = 0, rightey = 0;

		leftey = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rightey = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((leftey > rightey) ? leftey : rightey);
	}
	return (0);
}
