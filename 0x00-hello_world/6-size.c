#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char b[7] = "byte(s)";

	printf("Size of a char: %d %s\n", sizeof(char), b);
	printf("Size of an int: %d %s\n", sizeof(int), b);
	printf("Size of a long int: %d %s\n", sizeof(long int), b);
	printf("Size of a long long int: %d %s\n", sizeof(long long int), b);
	printf("Size of a float: %d %s\n", sizeof(float), b);
	return (0);
}
