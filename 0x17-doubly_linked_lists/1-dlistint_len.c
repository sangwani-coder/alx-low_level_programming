#include "lists.h"


/**
 *dlistint_len - counts the number of elements in a linked list
 *@h: The head of the dlistint list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
