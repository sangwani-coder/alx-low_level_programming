#include "main.h"

/**
 * _sqrt_recursion - return the square root of x
 * @x: integer find its sqaure root
 *
 * Return: the square root of x
 */

int _sqrt_recursion(int x)
{
	int low = 0;
	int high = x;
	/* Find the mid value of the range*/
	int mid = (low + x) / 2;

	/* Base case*/
	if ((mid * mid <= x) && ((mid +1) * (mid +1) > x))
	{
		return mid;
	}
	/*C ondiiton to check if the left search space is useless*/
	else if (mid * mid < x)
	{
		mid + 1;
		return (_sqrt_recursion(x));
	}
	else
	{
		mid - 1;
		return (_sqrt_recursion(x));
	}
	return low;
}
