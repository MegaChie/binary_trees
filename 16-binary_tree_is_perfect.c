#include "binary_trees.h"
/**
 * isLeaf - check code.
 * @node: constant structure pointer
 * Return: function's value
 */
unsigned char isLeaf(const binary_tree_t *node)
{
	return ((node->left == 0 && node->right == 0) ? 1 : 0);
}

/**
 * depth - check code.
 * @tree: constant structure pointer
 * Return: function's value
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != 0 ? 1 + depth(tree->parent) : 0);
}

/**
 * getLeaf - check code.
 * @tree: constant structure pointer
 * Return: tree's value or function's value
 */
const binary_tree_t *getLeaf(const binary_tree_t *tree)
{
	if (isLeaf(tree) == 1)
	{
		return (tree);
	}
	return (tree->left ? getLeaf(tree->left) : getLeaf(tree->right));
}

/**
 * is_perfect_recursive - check code.
 * @tree: constant structure pointer
 * @leafDepth: structure variable
 * @level: structure variable
 * Return: function's value or 0
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leafDepth, size_t level)
{
	if (isLeaf(tree))
	{
		return (level == leafDepth ? 1 : 0);
	}
	if (tree->left == 0 || tree->right == 0)
	{
		return (0);
	}
	return (is_perfect_recursive(tree->left, leafDepth, level + 1) &&
		is_perfect_recursive(tree->right, leafDepth, level + 1));
}

/**
 * binary_tree_is_perfect - check code.
 * @tree: constant structure pointer
 * Return: function's value
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == 0)
	{
		return (0);
	}
	return (is_perfect_recursive(tree, depth(getLeaf(tree)), 0));
}
