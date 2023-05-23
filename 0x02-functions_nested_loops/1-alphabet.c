#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet in lower caase
 */
void print_alphabet(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
		_putchar(lcase);

	_putchar('\n');
}

