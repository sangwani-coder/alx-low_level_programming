#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - print strings
 *@separator: string to print between strings
 *@n: number of strings passed to function
 *@...: variable parameters
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	/*Initialize arg to the list pointer*/
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			
			printf("%s", va_arg(ptr, char *));
				
			if (i < n - 1)
			{
				printf("%s", separator);
			}
			
			va_end(ptr);
		}
		else
		{
			printf("%s", va_arg(ptr, char *));
			if (i < n - 1)
			{
				printf("%s", separator);
			}
			va_end(ptr);
		}
	}
		putchar('\n');

}
