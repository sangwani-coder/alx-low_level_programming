#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - free a list
 * @head: first node of list
 * Return: Void
 */
void free_listint2(listint_t **head)
{

	while (*head != NULL)
	{
		listint_t *new = (*head);
		(*head) = (*head)->next;
		free(new);
	}
	*head = NULL;
}

