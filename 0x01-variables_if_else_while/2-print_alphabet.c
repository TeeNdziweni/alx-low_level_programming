#include <stdio.h>
/**
 * main - program starts and ends
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int q;

	for (q = 0; q < 26; q++)
	{
		putchar(alpha[q]);
	}
	putchar('\n');
	return (0);
}
