#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to first node of list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = *head;
	listint_t *rest = first->next;

	/*empty list*/
	if (*head == NULL)
		return (*head);

	/*list has only one node*/
	if (rest == NULL)
		return (*head);

	/*reverse the rest list and put the first element at the last*/
	reverse_listint(&rest);
	first->next->next = first;

	first->next = NULL;

	/*change the head pointer*/
	*head = rest;
	return (rest);
}
