#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocated memory using malloc
 * @b: int param
 *
 * Return: pointer to allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *) malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
