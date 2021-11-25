#include "lists.h"

/**
 *add_dnodeint - Adds a new node at the beginning of a list
 *@head: A pointer to the head of the list
 *@n: The integer for the new node to contain
 *
 * Return: Null if it fails - otherwise
 * return the addres of the new node
 */
dlistint *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
