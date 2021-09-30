#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - execute a function given as parameter on each element
 *@array: array to execute
 *@size: size of array
 *@action: pointer to the function
 *
 * Return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
