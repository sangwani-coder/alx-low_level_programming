#include "main.h"
/**
 * print_binary - print binary representation on a number
 * @n: integer
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin;

	if (n > 1)
	print_binary(n >> 1);
	bin = n & 1;
	_putchar(bin + '0');
}
