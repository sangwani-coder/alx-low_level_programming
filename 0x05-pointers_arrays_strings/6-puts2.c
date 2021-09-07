#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts2 - print every other char
* @str: string variable
*
*/

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 ==  0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
