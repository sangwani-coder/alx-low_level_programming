#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - get arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main (int argc, char argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	get_op_func(op)(a, b);
	return (0);
}
