#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - goes through each element and counts
 * @h: head of the list
 *
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
