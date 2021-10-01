#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - print numbers
 *@separator: string to print between numbers
 *@n: number of integers passed to function
 *@...: variable parameters
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	/*Initialize arg to the list pointer*/
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(ptr, int));
			if (i < n - 1)
			{
				printf("%s", separator);
			}
			va_end(ptr);
		}
		else
		{
			printf("%d", va_arg(ptr, int));
			va_end(ptr);
		}
	}
		putchar('\n');

}
