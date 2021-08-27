#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */

int main(void)
{
	char ch;
	/* for loop to get alphabet character*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
