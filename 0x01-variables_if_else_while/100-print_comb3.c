#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a, c;

	for (a = 48; a <= 56; a++)
	{
		for (c = 49; c <= 57; c++)
		{
			if (a > c)
			{
				putchar(a);
				putchar(c);
				if (a != 56 || c != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
