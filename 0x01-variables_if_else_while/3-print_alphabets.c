#include <stdio.h>
/**
 * main - program starts
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int l;

	for (l = 0; l < 52; l++)
	{
		putchar(alpha[l]);
	}
	putchar('\n');
	return (0);
}
