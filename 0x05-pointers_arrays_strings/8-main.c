#include "main.h"

/**
 *main - check the code
 *
 *Return Always 0.
 */

void print_array(int *a, int n);

int main(void)
{
	int array[5];
	
	array[0] = 98;
	array[1] = 402;
	array[2] = -192;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}
