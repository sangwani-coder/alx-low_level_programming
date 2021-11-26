#include "lists.h"

/**
 *insert_dnodeint_at_index - Adds a new node at the given index
 * end of a list
 *@h: A pointer to the head of the list
 *@idx: The position to insert the new node
 *@n: The integer for the new node to contain
 *
 * Return: Null if it fails - otherwise
 * return the addres of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *new_node = NULL;
	unsigned int iter_times = 0, len = 0;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	len = dlistint_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (len == idx)
		return (add_dnodeint_end(h, n));

	current = *h;
	while (current != NULL)
	{
		if (iter_times == idx)
		{
			new_node = create_node(n, current, current->next);
			current->prev = new_node;
			current = new_node;
			current->prev->next = new_node;
			return (new_node);
		}
		current = current->next;
		++iter_times;
	}
	return (current);
}

/**
 *dlistint_len - counts the number of elements in doubly linked list
 *@h: The double linked list to count
 *
 * Return: Number of elements in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}
	return (len);
}

/**
 *create_node - Create a new node with value
 *@n: The number of the new node
 *@next: The next node of the new node
 *@prev: The previous node of new node
 *
 * Return: The address of new node created
 */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = next;
	new_node->prev = prev;
	return (new_node);
}
