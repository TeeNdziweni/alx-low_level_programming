#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 * Return: always 0
 */
int main(void)
{
	long int t;
	long int max;
	long int f;

	t = 612852475143;
	max = 1;

	while (t % 2 == 0)
	{
		max = 2;
		t /= 2;
	}

	for (f = 3; f <= sqrt(t); f = f + 2)
	{
		while (t % f == 0)
		{
			max = f;
			t = t / f;
		}
	}
	if (t > 2)
		max = t;

	printf("%ld\n", max);
	return (0);
}
