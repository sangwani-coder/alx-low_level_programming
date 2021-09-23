#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatenate
 *
 * Return: pointer to newlly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *ptr;

	ptr = (char *) malloc(strlen(s1) * n * sizeof(char));

	/*Insert first string in the new string*/
	while (s1[i] != '\0')
	{
		ptr[j] = s1[i];
		i++;
		j++;
	}
	/*Insert second string into new string*/
	i = 0;
	while (i != n)
	{
		ptr[j] = s2[i];
		i++;
		j++;
	}
	ptr[j] = '\0';

	return (ptr);
}
