#include <stdio.h>

/**
 * _strcmp - compare two strings
 *@s1: string 1
 *@s2: string 2
 *
 * Return: 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int flag = 0, i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;

		}
		i++;
	}
	if (flag == 0)
		return (0);
	else
		return (s1 - s2);
}
