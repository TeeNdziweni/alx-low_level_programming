#include "main.h"
/**
*_strlen - calculate length of string
*@s: string variable
*Return: length of string;
*/

int _strlen(char *s)
{
	int t = 0;

	while (*s != '\0')
	{
		t++;
		s++;
	}
	return (t);
}
