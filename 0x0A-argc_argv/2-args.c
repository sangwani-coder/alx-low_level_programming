#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)

		printf("%s\n", argv[count]);
	}

	return (0);
}
