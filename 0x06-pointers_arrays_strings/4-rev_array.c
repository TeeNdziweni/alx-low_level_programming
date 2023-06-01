#include "main.h"

/**
*reverse_array - reverse array of integers
*@a: array
*@n: number of elements of the array
*
*Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int w;

	for (i = 0; i < n--; i++)
	{
		w = a[i];
		a[i] = a[n];
		a[n] = w;
	}
}
