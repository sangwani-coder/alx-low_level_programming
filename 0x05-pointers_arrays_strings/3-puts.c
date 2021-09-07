#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _puts - print out a string
* @str: string variable
*
* Return: 0
*/

void _puts(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
