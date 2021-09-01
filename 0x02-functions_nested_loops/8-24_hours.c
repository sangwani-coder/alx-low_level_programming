#include "main.h"
#include <stdio.h>

/**
 *jack_bauer - print 24 hours
 *
 *Return: Always 0.
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			printf("%02d", h);
			printf(":");
			printf("%02d\n", m);
		}
	}
}
