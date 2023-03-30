#include "binary_trees.h"
/**
 * binary_trees_ancestor - check code.
 * @first: constant structure pointer
 * @second: constant structure pointer
 * Return: 0 or function's value
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t firstDepth, secondDepth;

	if (first == 0 || second == 0)
		return (0);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);
	if (first == second->parent)
		return ((binary_tree_t *)first);
	if (first->parent == second)
		return ((binary_tree_t *)second);

	for (firstDepth = depth(first); firstDepth > 1; firstDepth--)
		first = first->parent;
	for (secondDepth = depth(second); secondDepth > 1; secondDepth--)
		second = second->parent;

	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);
	if (first == second->parent)
		return ((binary_tree_t *)first);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	else
		return (0);
}

/**
 * depth - check code.
 * @tree: constant structure pointer
 * Return: function's value
 */
size_t depth(const binary_tree_t *tree)
{
	return ((tree->parent != 0) ? 1 + depth(tree->parent) : 0);
}
