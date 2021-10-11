#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 *print_all - anything
 *@format: list of types passed to functions
 *@...: variable parameters
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
  	int done;

  	va_start(args, format);
  	done = vfprintf(stdout, format, args);
  	va_end(args);
  	printf("%d", done);
	putchar('\n');
}
