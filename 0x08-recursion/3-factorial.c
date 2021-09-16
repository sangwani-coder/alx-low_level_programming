#include "main.h"

/**
 * factorial - calculate the factorial of n
 * @n: int to find the fact
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);

	}
	return (n * factorial(n - 1));
}
