#include "binary_trees.h"
/**
 * binary_tree_rotate_left - check code.
 * @tree: structure pointer
 * Return: 0 or pivot's value
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot, *tmp;

	if (tree == 0 || tree->right == 0)
	{
		return (0);
	}
	pivot = tree->right;
	tmp = pivot->left;
	pivot->left = tree;
	tree->right = tmp;
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
