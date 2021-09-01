#include "main.h"
#include <ctype.h>
/**
 *_islower - chech if a char is lowercase
 *@c: placeholder for a char
 *
 * Return: Always 1 if char is lowercase and 0 otherwise
 */



int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

