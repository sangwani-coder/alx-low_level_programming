/*#include "main.h"*/
#include <ctype.h>
/**
 *_isupper - chech if a char is uppercae
 *@c: placeholder for a char
 *
 * Return: Always 1 if char is uppercase and 0 otherwise
 */



int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

