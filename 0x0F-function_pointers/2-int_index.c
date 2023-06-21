#include "function_pointer.h"
/**
 * int_index - return index place if comparison = to -1
 * @array: array
 * @size: size of element
 * @cmp: pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int h;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (h = 0; h < size; h++)
	{
		if (cmp(array[h]))
			return (h);
	}
	return (-1);
}

