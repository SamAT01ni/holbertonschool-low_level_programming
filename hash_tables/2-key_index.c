#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of array of hash table
 *
 * Return: index where key/value pair is stored in hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
