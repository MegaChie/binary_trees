#include "binary_trees.h"
/**
 * array_to_bst - check code.
 * @array: integer pointer
 * @size: structure variable
 * Return: 0 or tree's value
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = 0;
	size_t raw, collumn;

	if (array == 0)
		return (0);

	for (raw = 0; raw < size; raw++)
	{
		for (collumn = 0; collumn < raw; collumn++)
		{
			if (array[collumn] == array[raw])
			{
				break;
			}
		}
		if (collumn == raw)
		{
			if (bst_insert(&tree, array[raw]) == 0)
			{
				return (0);
			}
		}
	}
	return (tree);
}
