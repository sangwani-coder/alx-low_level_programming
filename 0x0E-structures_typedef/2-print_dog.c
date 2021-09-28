#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *name = (*d).name;
	float age = d->age;
	char *owner = d->owner;

	/**
	 * if (name == NULL)
	 * {
	 * printf("Name: %s\n", name);
	 * printf("Age: %f\n", d->age);
	 * printf("Owner: %s\n", (*d).owner);
	 * }
	 */
	printf("Name: %s\n", name);
	printf("Age: %f\n", age);
	printf("Owner: %s\n", owner);
}
