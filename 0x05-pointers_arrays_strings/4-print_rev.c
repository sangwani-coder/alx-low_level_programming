#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - print out a string in reverse
* @s: string variable
*
*/

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
