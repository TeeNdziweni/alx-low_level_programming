#include <stdio.h>
/**
 * main - print the number 1 to 100,
 *  3 x display fizz,
 *  5x print buze, both 2 & 5 print fizzbuzz
 * Return: always 0
 */
int main(void)
{
	int w;

	for (w = 1; w <= 100; w++)
	{
		if (w % 3 == 0 && w % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (w % 5 == 0 && w % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (w % 3 == 0 && w % 5 == 0)
		{
			printf(" FizzBuz");
		}
		else if (w == 1)
		{
			printf(" %d", w);
		}
		else
		{
			printf(" %d", w);
		}
	}
	printf("\n");
	return (0);
}
