#include "lists.h"

/**
 * sum_dlistint - sums each value in the list
 * @head: start of the list
 *
 * Return: the sum, or 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
