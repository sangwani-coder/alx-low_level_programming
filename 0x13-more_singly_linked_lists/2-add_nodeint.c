#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: head of the node
 * @n: integer
 *Return: the address of the new element if success or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*Declare and create a new node of listint_t datatype*/
	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	/*Make the new node point to the head node*/
	newNode->next = (*head);
	(*head) = newNode;
	return (0);
}
