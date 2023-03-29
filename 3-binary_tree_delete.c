#include "binary_trees.h"
/**
 * binary_tree_delete - check code.
 * @tree: structure pointer
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != 0)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
