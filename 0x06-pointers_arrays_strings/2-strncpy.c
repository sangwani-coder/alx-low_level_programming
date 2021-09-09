#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy strings
 *@dest: destination
 *@src: source string
 *@n: int parameter
 *
 * Return: pointer to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	/* terminate the dest string */
	for ( ; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
