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
	unsigned int decimal = 0, base = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--) /* search for null 0 or 1 characters*/
	{
		if (isdigit(b[i]) == 0)
		{
			return (0);
		}
		decimal += (b[i] - '0') * base;
		base *= 2;
	}
	return (decimal);
}
