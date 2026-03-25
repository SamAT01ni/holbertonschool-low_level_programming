#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: start of the list
 * @index: nth node
 *
 * Return: address of nth ndoe
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	tmp = head;
	for (i = 0; tmp &&  i < index; i++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
