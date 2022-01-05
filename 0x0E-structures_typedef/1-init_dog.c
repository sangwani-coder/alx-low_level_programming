#include "dog.h"

/**
 * init_dog - initalize a variable of type struct dog
 * @d: dog struct
 * @name: dog name char
 * @age: dog age int
 * @owner: dog owner char
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
