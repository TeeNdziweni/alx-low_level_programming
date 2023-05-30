#include "main.h"
#include <stdio.h>

/**
*print_array - prints number of elements of an integer array
*@a: pointer
*@n: number of elements in the array
*/

void print_array(int *a, int n)
{
	for (n = 0; n <=5; n++)
	{
		printf("%d,", *a);
	}
}
