#include "lists.h"

/**
 * sum_listint - sum elements of a list
 * @head: first node of list
 *
 * Return: sum of elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
