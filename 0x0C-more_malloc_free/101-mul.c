#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - multiply tow numbers
 * @argc: number of arguments
 * @argv: agument vector
 *
 * Return: Product
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if(argc!=3)
	{
		printf("error\n");
		exit(98);
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
    printf("%d\n", mul);
	
	return (0);
}
