#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: first node of list
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *new = *head;

	while (*head != NULL)
	{
		new = *head;
		(*head) = (*head)->next;
		free(new);
	}
}

