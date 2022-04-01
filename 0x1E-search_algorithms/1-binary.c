#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 *   sorted in ascending order
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: Index of value, otherwise return -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, L = 0;
	size_t R = size - 1;
	int m;

	if (array == NULL)
	{
		return (-1);
	}

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		m = L + (R - L) / 2;
		if (array[m] == value)
		{
			return (m);
		}
		if (array[m] < value)
		{
			L = m + 1;
		}
		else
		{
			R = m - 1;
		}
	}
	return (-1);
}
