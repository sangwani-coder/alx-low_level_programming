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
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
