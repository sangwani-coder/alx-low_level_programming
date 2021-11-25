#include "lists.h"

/**
 *free_dlistint - Frees the linked dlistint list
 *@head: The head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
