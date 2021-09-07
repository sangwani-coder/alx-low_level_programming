#include "main.h"
#include <string.h>

/**
* puts_half - print second half of string
* @str: string variable
*
*/

void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 0)
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	else
		for (i = (len - 1) / 2; i < len - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	_putchar('\n');
}
