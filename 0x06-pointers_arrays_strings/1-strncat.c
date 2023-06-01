#include "main.h"

/**
*_strncat - concatenate two strings
*using at n bytes
*@dest: input value
*@src: input value
*@n: input value
*
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int r;
	int y;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[r] = src[y];
		r++;
		y++;
	}
	dest[r] = '\0';
	return  (dest);
}
