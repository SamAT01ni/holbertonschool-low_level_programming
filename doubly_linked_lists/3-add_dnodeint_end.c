#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end of the list
 * @head: beginning of the list
 * @n: integer
 *
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	if (current)
	{
		new->prev = current;
		current->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
