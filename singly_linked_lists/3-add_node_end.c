#include "lists.h"

/**
 * add_node_end - adds nodes to the tail
 * @head: start of list
 * @str: a string
 *
 * Return: address of new element, or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[length] != '\0')
		length++;
	new_node->len = length;
	new_node->next = NULL;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	if (current)
		current->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
