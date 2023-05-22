#include <stdio.h>
/**
 * main - print alphabet in reverse
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char g;

	for (g = 'z'; g >= 'a'; g--)
	{
		putchar(g);
	}
	putchar('\n');
	return (0);
}
