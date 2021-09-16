#include "main.h"
#include <string.h>

/**
 *_puts_recursion - print string with a new line
 *@s: string to be printed
 *
 *Return Nothing
 */

void _puts_recursion(char *s)
{
	int i;
	int len = strlen(s);

	for (i = 0; i < len; i ++)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
