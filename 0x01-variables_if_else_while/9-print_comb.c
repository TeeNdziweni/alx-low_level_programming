#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: always 0 (succes)
 */
int main(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
		if (b != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
