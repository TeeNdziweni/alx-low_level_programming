#include "main.h"

/**
 * print_triangle - print a triangle and a new line
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, m;

		for (i = 1; i <= size; i++)
		{
			for (m = i; m < size; m++)
			{
				_putchar(' ');
			}
			for (m = 1; m <= i; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
