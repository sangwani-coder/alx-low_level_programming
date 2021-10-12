#include "lists.h"

/**
 * insert_nodeint_at_index - add a new node a given position
 * @head: head of the node
 * @idx: index of the list where to insert node
 * @n: integer
 *Return: the address of the new element if success or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	unsigned int i;
	listint_t *temp;

	ptr->n = n; /*Creating a new node*/
	temp = *head;

	if (idx == 1)
	{
		ptr->next = temp;
		*head = ptr;
		return (0);
	}

	for (i = 1; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	ptr->next = temp->next;
	temp->next = ptr;
	return (0);
}
