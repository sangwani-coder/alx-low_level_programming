#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_dog - free memory created with malloc
 *@d: memory to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
