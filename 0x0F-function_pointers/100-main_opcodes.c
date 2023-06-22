#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: number of args
 * @argv: array of args
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int bytes, m;
	char *ray;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ray = (char *)main;

	for (m = 0; m < bytes; m++)
	{
		if (m == bytes - 1)
		{
			printf("%02hhx\n", ray[m]);
			break;
		}
		printf("%02hhx ", ray[m]);
	}
	return (0);
}
