#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */

int main(void)
{
	char ch;
	int i;

	/* for loop to get alphabet character*/
	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
