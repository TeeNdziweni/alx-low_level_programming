#include "main.h"
#include <stdio.h>
/**
*puts2 - print every other character of a string
*@str: string of characters to be printed
*/

void puts2(char *str)
{
	int i = 0;
	int q = 0;
	char *y = str;
	int e;

	while (*y != '\0')
	{
		y++;
		i++;
	}

	q = i - 1;

	for (e = 0; e <= q; e++)
	{
		if (e % 2 == 0)
		{
			_putchar(str[e]);
		}
	}
	_putchar('\n');
}
