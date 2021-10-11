#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index in a linked list
 * @head: first node of linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if success or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	p = *head;

	if (index == 0) /*if head needs to be removed*/
	{
		*head = p->next; /*change head*/
		free(p); /*free old head*/
		return (1);
	}
	/*find previous node of the node to be deleted*/
	for (i = 0; p != NULL && i < index - 1; i++)
		p = p->next;

	/*If index is more than the number of nodes*/
	if (p == NULL || p->next == NULL)
		return (-1);
	/*Node p->next is the node to be deleted*/
	/*Store pointer to the next of node to be deleted*/
	next = p->next->next;
	/*unlink the node from linked list*/
	free(p->next);

	p->next = next; /*unlink the deleted node from list*/
	return (1);
}
