#include "binary_trees.h"
/**
 * binary_tree_uncle - check code.
 * @node: constant structure pointer
 * Return: 0 or function's value
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == 0 || node->parent == 0 || node->parent->parent == 0)
    {
        return (0);
    }
    if (node->parent->parent->parent->left == node->parent)
    {
        return (node->parent->parent->right);
    }
    return (node->parent->parent->left);
}
