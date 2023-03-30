#include "binary_trees.h"
/**
 * is_full_recursive - check code.
 * @tree: constant structure pointer
 * Return: 0 or 1
 */
int is_full_recursive(const binary_tree_t *tree)
{
    if (tree != 0)
    {
        if ((tree->left != NULL && tree->right == NULL) ||
            (tree->left == NULL && tree->right != NULL) ||
            is_full_recursive(tree->left) == 0 ||
            is_full_recursive(tree->right) == 0)
        {
            return (0);
        }
    }
    return (1);
}

/**
 * binary_tree_is_full - check code
 * @tree: constant structure pointer
 * Return: 0 or function's value
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == 0)
    {
        return (0);
    }
    return (is_full_recursive(tree));
}
