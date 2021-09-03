#include "main.h"

/**
 *largest_number - returns the largest numbers
 *@a: first int
 *@b: second int
 *@c: third int
 *Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (a > c && c > b)
	{
		largest = a;
	}
	else if (b > c && c > a)
	{
		largest = b
	}
	else
	{
		largest = c;
	}

	return (largest);
}

