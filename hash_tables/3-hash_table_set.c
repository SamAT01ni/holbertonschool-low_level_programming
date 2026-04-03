#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: hash table used
 * @key: key, cant be empty
 * @value: value associated with key, must be duplicated
 *
 * Return: 1 if good, 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *tmp;
	char *new_val;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_val = strdup(value);

			if (new_val == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_val;
			return (1);
		}
		tmp = tmp->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (ht->array[idx] != NULL)
		node->next = ht->array[idx];

	ht->array[idx] = node;
	return (1);
}
