#include "main.h"
#include <ctype.h>
/**
 *print_sign - print the of a number
 *@n: placeholder for a number
 *
 * Return: Always 1 if num is positive and 0 if zero or - otherwise
 */



int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}

