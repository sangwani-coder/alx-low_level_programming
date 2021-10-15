#include "main.h"
/**
 *get_endianness - Check the endianness
 *
 * Return: If Big Endian(BE) - 0
 *	if little-endian(LE) - 1
 */
int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);
	return (0);
}
