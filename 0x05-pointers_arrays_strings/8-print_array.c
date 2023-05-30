#include "main.h"
#include <stdio.h>

/**
*print_array - prints number of elements of an integer array
*@a: pointer
*@n: number of elements in the array
*/

void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < (n - 1); r++)
	{
		printf("%d, ", a[r]);
	}

	if (r == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
