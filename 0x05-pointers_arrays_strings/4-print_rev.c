#include "main.h"
#include <stdio.h>
/**
*print_rev - print string in reverse
*@s: string printed
*/

void print_rev(char *s)
{
	int i = 0;
	int g;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (g = i; g > 0; g--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
