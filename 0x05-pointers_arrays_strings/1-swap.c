#include "main.h"
/**
*swap_int - swap the two integer values
*@a: first value
*@b: second value
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
