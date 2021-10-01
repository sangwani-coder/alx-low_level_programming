#include "function_pointers.h"
#include <ctype.h>
#include <stdio.h>

/**
 *int_index - search for an integer
 *@array: array to execute
 *@size: size of array
 *@cmp: pointer to the function
 *
 * Return: index of the first element 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		 j = array[i];
		 if (!(isdigit(j)) && size <= 0)
		 {
			 return (-1);
		 }
		 
		/* cmp();
		 printf("element: %d\n", k);*/
		 return (cmp(i));
	}
	return (0);
}
