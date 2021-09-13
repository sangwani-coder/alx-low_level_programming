#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copy memory area.
 *@dest: destination.
 *@src: source..
 *@n: size of bytes.
 *
 * Return: poniter to memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
