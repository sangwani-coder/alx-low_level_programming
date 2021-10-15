#include "main.h"
/**
 * clear_bit - set the bit value to 0 at given index
 * @n: pointer to a bit
 * @index: index of the bit starting at 0
 *
 * Return: on succes 1, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
