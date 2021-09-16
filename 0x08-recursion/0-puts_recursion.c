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
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
