#include "main.h"
#include <stdio.h>
/**
 *_strchr - locate a character.
 *@s: string to be searched..
 *@c: character to search for.
 *
 * Return: poniter to first occurence of c.
 */
char *_strchr(char *s, char c)
{

	while (*s != c && *s != '\0')
	{
		s++;
	}
		if (*s == c)
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
}
