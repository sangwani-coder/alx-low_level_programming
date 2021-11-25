#include "lists.h"

/**
 *print_dlistint - prints the elements in a dlistint int list
 *@h: Head of the list
 *
 *Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	wihle(h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
