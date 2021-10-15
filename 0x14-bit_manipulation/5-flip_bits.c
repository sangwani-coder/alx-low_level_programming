#include "main.h"
/**
 *flip_bits - counts the number of bits needed to be fliiped
 *to get from one number to the next
 *@n: The number to flip
 *@m: The number to flip n to
 *Return: The number of bits to flip from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bit = 0;

	while (xor > 0)
	{
		bit = bit + (xor & 1);
		xor = xor >> 1;
	}
	return (bit);
}

