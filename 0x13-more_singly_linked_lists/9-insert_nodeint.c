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
	unsigned int i = 0;
	/*Declare a new node of listint_t datatype*/
	listint_t *newNode, *temp;

	/*Create the new node*/
	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;
	temp = *head;

	if (idx == 1)
	{
		newNode->next = temp;
		*head = newNode;
		return (0);
	}
	for (i = 1; i < idx; i++)
	{
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (0);
}
