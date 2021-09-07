#include "main.h"
#include <string.h>

/**
* puts2 - print every other char
* @str: string variable
*
*/

void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 0)
	 { 
		 for (i = len / 2; i < len; i++)
		 {
			_putchar(str[i]);
		 }
	 }
	else
	{
		for (i =  (len  - 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
