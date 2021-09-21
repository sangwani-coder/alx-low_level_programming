#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	/*int x;*/
	int i;


	if ( argc == 1 )
	{
		printf("%d\n", 0);
	}

	for ( i = 1; i < argc; i++)
	{
		if (isdigit(argv[0]))
		{
			printf("Error,\n");
		}
		/*else
		{
			x = atoi(argv[i]) + atoi(argv[i]);
			printf("%d\n", x);
		}*/
	}
	return (0);
}
