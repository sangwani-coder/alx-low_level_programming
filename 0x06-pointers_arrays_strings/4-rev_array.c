#include "main.h"

/**
 *reverse_array - reverse the array
 *@a: array of integers
 *@n: number of elements
 *
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
