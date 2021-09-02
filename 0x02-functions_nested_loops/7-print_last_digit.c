#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - print the last digit of a number
 *@i: integer paramater
 *
 * Return: Always 0 success
 */

int print_last_digit(int i)
{
	int last_digit;

	last_digit = abs(i) % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}

