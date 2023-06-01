#include "main.h"

/**
*leet - encode into 1337speak
*@n: input value
*Return: n value
*/

char *leet(char *n)
{
	int a, i;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (i = 0; i < 10; i++)
		{
			if (n[a] == s1[i])
			{
				n[a] = s2[i];
			}
		}
	}
	return (n);
}
