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

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 != NULL && s2 == NULL)
		{
			ptr = (char *) malloc(strlen(s1) * n * sizeof(char));
			s2 = " ";
			ptr = s1;
		}
		else if (s1 == NULL && s2 != NULL)
		{
			s1 = " ";
			ptr = (char *) malloc(strlen(s1) * n * sizeof(char));
			while (i != n)
		{
			ptr[j] = s2[i];
			i++;
			j++;
		}
		ptr[j] = '\0';

		}
		else if (s1 == NULL && s2 == NULL)
		{
			ptr = (char *) malloc(strlen(s1) * n * sizeof(char));
			s1 = " ";
			s2 = " ";
			ptr = " ";
		}
		return (ptr);
	}
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
			while (i != n || i != '\0')
			{
				ptr[j] = s2[i];
				i++;
				j++;
			}
			ptr[j] = '\0';

			return (ptr);
}
