#include "3-calc.h"
#include <stdio.h>

/**
 *get_op_func - slect the corect operator
 *@s: operator passed as argument
 *Return: pointer to the corresponding function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
    i = 0;
    while ( i < 6)
    {
    ops[i];
	i++;
    }
	return (0);
}
