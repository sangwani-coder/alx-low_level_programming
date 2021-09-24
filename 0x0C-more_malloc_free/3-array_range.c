#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: starting point
 * @max: ending point
 *
 * Return: pointer to the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	void *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(min * max);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
