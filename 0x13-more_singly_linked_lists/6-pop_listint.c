#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: first node of linked list
 * Return: if success data of the nade head else
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int q;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		p = *head;
		*head = (*head)->next;
		q = p->n;
		free(p);
		return (q);
	}
	return (0);
}
