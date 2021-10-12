#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node
 * @head: first node of list
 * @index: index of the node starting at 0
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;

	unsigned int count = 0;

	while (curr != NULL)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		if (count == index - 1)
		{
			return (curr->next);
		}
		count++;
		curr = curr->next;
	}
	return (0);
}
