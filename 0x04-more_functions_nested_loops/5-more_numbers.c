#include "main.h"

/**
 *more_numbers - print numbers except 10 times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i = 0;
	int a;

	do {
		for (a = 0; a < 15; a++)
		{
			_putchar((char)a%10 + '0');
		}
		_putchar('\n');
		i++;
	} while (i  < 10);
	_putchar('\n');
}

