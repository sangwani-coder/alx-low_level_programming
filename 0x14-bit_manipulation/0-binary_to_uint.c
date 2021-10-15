#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: pointer to binary number
 *
 * Return: the converted number or NULL if function fails
 */
unsigned int binary_to_uint(const char *b)
{
	int num, decimal = 0, base = 1, rem;
	size_t i;

	for (i = 0; i < strlen(b); i++) /* search for null 0 or 1 characters*/
	{
		if (isdigit(b[i]) == 0)
		{
			return (0);
		}
	}

	if (b == NULL)
	{
		return (0);
	}

	num = atoi(b);

	while (num > 0)
	{
		rem = num % 10;
		decimal = decimal + rem * base;
		num /= 10;
		base *= 2;
	}
	return (decimal);
}
