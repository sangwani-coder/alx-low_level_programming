#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *new_dog - create a new dog
 *@name: dog name char
 *@age: dog age flaot
 *@owner: dog owner char
 *
 * Return: struct
 */
dog_t *new_dog(__attribute__((unused))char *name, float age, char *owner)
{
	dog_t *nd = malloc(sizeof(dog_t));

	if (nd == NULL)
	{
		return (NULL);
	}
	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	return (nd);
}
