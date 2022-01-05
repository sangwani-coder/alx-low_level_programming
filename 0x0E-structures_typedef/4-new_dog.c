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
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = _strcopy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcopy(doggy-owner, owner);

	return (doggy);
}

/**
 *_strlen - finds the length of a string.
 *@str: the string to be measured
 *
 *Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 *_strcopy - copies a string pointed to by src, includeing
 *		the terminating null byte, to a buffer pointed to bt dest.
 *
 *@dest: the buffer storing the copy of the string
 *@src: the source string
 *
 *Return: The new struct dog.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
