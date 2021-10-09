#include "lists.h"
#include <stdio.h>

/**
 *print_list - print all elements of a list
 *@h: list
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
