#include "main.h"
#include <stdio.h>

/**
*rot13 - encode rot13
*@s: pointer to string params
*Return: *s
*/

char *rot13(char *s)
{
	int r;
	int y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (r = 0; s[r] != '\0'; r++)
	{
	for (y = 0; y < 52; y++)
	{
	if (s[r] == data1[y])
	{
		s[r] = datarot[y];
		break;
	}
	}
	}
	return (s);
}
