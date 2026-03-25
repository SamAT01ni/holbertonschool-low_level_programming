#include "lists.h"

/**
 * insert_dnodeint_at_index - insets new node at nth position
 * @h: header
 * @idx: index where new node is added
 * @n: number assigned for new node
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	current = *h;
	for (i = 0; current && current->next && i < idx; i++)
	{
		current = current->next;
	}

	if (current)
	{
		new->prev = current;
		current->next = new;
	}
	return (new);
}
