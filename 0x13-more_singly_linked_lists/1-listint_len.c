#include "lists.h"

/**
 * listint_len - return the number of elements
 * @h: list
 *
 * Return: number of elements in a singly linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
