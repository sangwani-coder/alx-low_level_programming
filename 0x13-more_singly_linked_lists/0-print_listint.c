#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print the elements of a list
 * @h: list of ints
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
