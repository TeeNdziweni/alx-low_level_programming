#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @r: no. of time the character prints
 */

void print_diagonal(int r)
{
	if (r <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int g, s;

		for (g = 0; g < s; g++)
		{
			for (s = 0; s < g; s++)
			{
				if (g == s)
					_putchar('\\');
				else if (s < g)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
