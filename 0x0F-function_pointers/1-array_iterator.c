#include "function_pointers.h"
#include <stdio.h>
/**
 * array_inerator - print array element
 * @array: array
 * @size: how many elements
 * @action: pointer to print regular/hexegon
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int b;

	if (array == NULL || action == NULL)
		return;

	for (b = 0; b < size; b++)
	{
		action(array[b]);
	}
}
