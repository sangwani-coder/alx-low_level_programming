#include "main.h"

/**
 *print_most_numbers - print numbers except 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int i = 0;

	do {
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i + '0');
		i++;
	} while (i  < 10);
	_putchar('\n');
}

