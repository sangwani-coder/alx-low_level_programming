#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *new_dog - create a new dog
 *@name: dog name char
 *@age: dog age flaot
 *@owner: dog owner char
 *
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd = malloc(sizeof(dog_t));

	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	return (nd);
}
