#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum up parameters
 *@n: named paramater
 *@...: variable parameters
 *
 * Return: sum of params
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}

	/*Initialize arg to the list pointer*/
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
		va_end(ptr);
	}
	return (sum);

}
