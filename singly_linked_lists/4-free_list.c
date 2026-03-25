#include "lists.h"

/**
 * free_list - frees memory from a list
 * @head: beginning of list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
