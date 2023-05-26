#include "main.h"

/**
 * print_line - draw a straight line
 * @d: no. of limes character is printed
 */

void print_line(int d)
{
	if (d <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <+ d; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
