#include "function_pointers.h"

/**
 * print_name - print names
 * @name: name to print
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

