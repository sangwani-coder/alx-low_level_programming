#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strspn - get lenght of substring.
 *@s: null terminated string to be scanned
 *@accept: null terminated string containing the characters to match
 *
 * Return: length of the segment
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int i = 0, j = 0;
	int count = 0;
	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);

	for (i = 0; i < len1 - len2; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
