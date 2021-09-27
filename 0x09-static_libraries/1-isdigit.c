#include <ctype.h>
/**
 *_isdigit - chech if a input is a digit
 *@c: parameter
 *
 * Return: Always 1 if param is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

