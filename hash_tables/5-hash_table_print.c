#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flip;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0, flip = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flip == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			while ((tmp = tmp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
			}
			toggle = 1;
		}
	}
	printf("}\n");
}
