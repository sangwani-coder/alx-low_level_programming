#include "main.h"

/**
 *_strlen_recursion - print the length of a string cursively
 *@s: string whose len is to  be calculated
 *
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		count =	1 + _strlen_recursion(s + 1);
	}
	return (count);

}
