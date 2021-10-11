#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *op_add - add a and b
 *@a: int 1
 *@b:: int 2
 *Return: sum of a and b
 */
int op_add(int a, int b)
{
	printf("%d\n", a + b);
	return (0);

}


/**
 *op_sub - subtract a and b
 *@a: int 1
 *@b:: int 2
 *Return: difference of a and b
 */
int op_sub(int a, int b)
{
	printf("%d\n", a - b);
	return (0);
}

/**
 *op_mul - multiply a and b
 *@a: int 1
 *@b:: int 2
 *Return: product of a and b
 */
int op_mul(int a, int b)
{
	printf("%d\n", a * b);
	return (0);
}

/**
 *op_div - divide a and b
 *@a: int 1
 *@b:: int 2
 *Return: division of a by b
 */
int op_div(int a, int b)
{
	printf("%d\n", a / b);
	return (0);
}

/**
 *op_mod - mod a and b
 *@a: int 1
 *@b:: int 2
 *Return: remainder of a by b
 */
int op_mod(int a, int b)
{
	printf("%d\n", a % b);
	return (0);
}
