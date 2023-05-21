#include <stdio.h>
/**
 * main - program starts
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char lower[24] = "abcdfghijklmnoprstuvwxyz";
	int e;

	for (e = 0; e < 24; e++)
	{
		putchar(lower[e]);
	}
	putchar('\n');
	return (0);
}
