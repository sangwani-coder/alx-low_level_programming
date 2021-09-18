#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int res;
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	if (argc == 3)
	{
		res = x * y;

		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");

		return (1);

	}

	return (0);
}
