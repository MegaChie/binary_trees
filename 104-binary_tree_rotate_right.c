#include "binary_trees.h"
/**
 * binary_tree_rotate_right - check code.
 * @tree: structure pointer
 * Return: 0 or pivot's value
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot, *tmp;

	if (tree == 0 || tree->left == 0)
	{
		return (0);
	}
	pivot = tree->left;
	tmp = pivot->right;
	pivot->right = tree;
	tree->left = tmp;
	if (tmp != 0)
	{
		tmp->parent = tree;
	}
	tmp = tree->parent;
	tree->parent = pivot;
	pivot->parent = tmp;
	if (tmp != 0)
	{
		if (tmp->left == tree)
		{
			tmp->left = pivot;
		}
		else
		{
			tmp->right = pivot;
		}
	}
	return (pivot);
}
