#include "lists.h"

/**
 * free_dlistint - frees nodes from the memory
 * @head: head of file
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
