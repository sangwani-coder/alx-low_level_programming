#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: head of the node
 * @n: integer
 *Return: the address of the new element if success or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*Declare a new node of listint_t datatype*/
	listint_t *newNode;

	/*Create the new node*/
	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;
	/*if head is NULL its an empty list*/
	if (*head == NULL)
	{
		*head = newNode;
	}
	/*Otherwise find the last node and add the new nodes*/
	else
	{
		listint_t *lastNode = *head;
		/*last node's next address will be NULL.*/
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		/*Add the new node the end of the list*/
		lastNode->next = newNode;
	}
	return (newNode);
}
