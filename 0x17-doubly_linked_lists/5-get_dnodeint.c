#include "lists.h"

/**
 *get_dnodeint_at_index - locates a node in a list.
 *@head: The head of the list
 *@index: The node to search for
 *
 *Return: NULL if node does not exist
 *	Other the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
