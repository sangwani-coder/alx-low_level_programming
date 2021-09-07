#include "main.h"

/**
 * swap_int - swap the values of two ints
 * @a: first param pointer
 * @b: second param pointer
 *
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
