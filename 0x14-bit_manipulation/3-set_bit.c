#include "main.h"
/**
 * set_bit - set the bit to 1 at given index
 * @n: number to get bit from
 * @index: index of the bit starting at 0
 *
 * Return: on succes 1, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1UL << index);
	return (1);
}
