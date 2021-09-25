#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _realloc - reallocate memory with malloc
 * @ptr: pointer to old allocated memory
 * @old_size: old sze
 * @new_size: new size
 *
 * Return: pointer to newlly reallocated space in memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = (void *) malloc(new_size);
		return (ptr);
	}
	ptr = malloc(new_size);
	return (ptr);
}
