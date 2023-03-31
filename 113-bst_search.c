#include "binary_trees.h"
/**
 * bst_search - check code.
 * @tree: constant structure pointer
 * @value: integer variable
 * Return: function's value or 0
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
		{
			return ((bst_t *)tree);
		}
		if (tree->n > value)
		{
			return (bst_search(tree->left, value));
		}
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
