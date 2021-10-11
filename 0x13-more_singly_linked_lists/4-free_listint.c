#include "lists.h"
/**
 * free_listint - free a list
 * @head: first node of list
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}

