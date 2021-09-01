#include "main.h"
#include <stdio.h>

/**
 *times_table - print the times tbale of 9
 */

void times_table(void)
{
	int i, j;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			product = i * j;
			printf("%3d,", product);
		}
		printf("%3d", i * 9);
		printf("\n");
	}
}
