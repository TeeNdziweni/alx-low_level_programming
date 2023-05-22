#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
	}
	for (y = 97; y < 103; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
