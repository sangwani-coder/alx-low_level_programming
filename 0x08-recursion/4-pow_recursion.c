#include "main.h"

/**
 * _pow_recursion - return the power of x
 * @x: integer to raise to the power y
 * @y: power to which x is raised
 *
 * Return: x raised to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
