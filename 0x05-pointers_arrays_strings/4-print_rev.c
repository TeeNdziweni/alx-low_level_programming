#include "main.h"
#include <stdio.h>
/**
*print_rev - print string in reverse
*@s: string printed
*/

void print_rev(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		i--;
	}
	puts("\n");
}
