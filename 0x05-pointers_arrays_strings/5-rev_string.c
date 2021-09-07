#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* rev_string - reverse a string
* @s: string variable
*
*/

void rev_string(char *s)
{
	int i, temp;
	int len = strlen(s);

	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
