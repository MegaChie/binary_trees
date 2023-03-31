#include "binary_trees.h"
/**
 * bst_insert - check code.
 * @tree: structure double pointer
 * @value: integer variable
 * Return: 0 or pointer
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *currunt, *new;

	if (tree != 0)
	{
		currunt = *tree;

		if (currunt == 0)
		{
			new = binary_tree_node(currunt, value);
			if (new == 0)
			{
				return (0);
			}
			return (*tree = new);
		}
		if (value < currunt->n)
		{
			if (currunt->left != 0)
			{
				return (bst_insert(&currunt->left, value));
			}
			new = binary_tree_node(currunt, value);
			if (new == 0)
			{
				return (0);
			}
			return (currunt->left = new);
		}
		if (value > currunt->n) /* insert in right subtree */
		{
			if (currunt->right != 0)
			{
				return (bst_insert(&currunt->right, value));
			}
			new = binary_tree_node(currunt, value);
			if (new == 0)
			{
				return (0);
			}
			return (currunt->right = new);
		}
	}
	return (0);
}
