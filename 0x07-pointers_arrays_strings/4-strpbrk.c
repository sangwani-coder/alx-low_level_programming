#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strbrk - search substring.
 *@s: null terminated string to be scanned
 *@accept: null terminated string containing the characters to search for
 *
 * Return: pointer to bytes
*/
char *_strpbrk(char *s, char *accept)
{

	int i, j, pos, flag = 0;
	/*int len1 = strlen(s);
	int len2 = strlen(accept);
	char res[10];*/
	for (i = 0; s[i] != '\0'; i++)
		pos = i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
	{
		return &s[i];
	}
	else
		return NULL;
}
