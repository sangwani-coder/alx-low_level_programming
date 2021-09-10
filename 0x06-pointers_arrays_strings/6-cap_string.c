#include "main.h"
#include <string.h>

/**
 *cap_string- change lower case to upper
 *@str: string to convert
 *
 *Return: upper string
 */
char *cap_string(char *str)
{
	int i, j;
	char deli[25] = {"' '\t,;.' '\n!' '?\"(){}-"};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; deli[j] != '\0'; j++)
		{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == deli[j])
		{
			++i;

			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
		}
	}

	return (str);
}
