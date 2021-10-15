#include "main.h"
/**
 * get_bit - get the index of a bit
 * @n: number to get bit from
 * @index: index of the bit starting at 0
 *
 * Return: Value of a bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*Right shift n, index times and perform bitwise AND with 1*/
	unsigned int bit_status;

	if (n & (1 << index))
	{
		bit_status = (n >> index) & 1;
		return (bit_status);
	}
	else
		return (-1);
}
