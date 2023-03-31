#include "binary_trees.h"
#include "limits.h"
/**
 * isBstHelper - check code.
 * @tree: constant structure pointer
 * @lo: intreger variable
 * @hi: integer variable
 * Return: 0 or 1
 */
int isBstHelper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n < lo || tree->n > hi)
		{
			return (0);
		}
		return (isBstHelper(tree->left, lo, tree->n - 1) &&
		isBstHelper(tree->right, tree->n + 1, hi));
	}
	return (1);
}

/**
 * binary_tree_is_bst - check code.
 * @tree: constant structure pointer
 * Return: o or function's value
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == 0)
		return (0);
	return (isBstHelper(tree, INT_MIN, INT_MAX));
}
