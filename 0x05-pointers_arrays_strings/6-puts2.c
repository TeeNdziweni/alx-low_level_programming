#include "main.h"
#include <stdio.h>
/**
*puts2 - print every other character of a string
* *str: string of characters to be printed
*/

void puts2(char *str)
{
	switch (*str)
	{
	case '0':
		puts("%d", *str);
		break;
	case '1':
		break;
	case '2':
		puts("%d", *str);
		break;
	case '3':
		break;
	case '4':
		puts("%d", *str);
		break;
	case '5':
		break;
	case '6':
		puts("%d", *str);
		break;
	case '7':
		break;
	case '8':
		puts("%d", *str);
		break;
	case '9':
		break;
	default:
		puts(' ');
	}
}

