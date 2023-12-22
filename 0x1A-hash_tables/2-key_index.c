#include "hash_tables.h"

/**
 * key_index - Calculates the index for a given key in a hash table.
 * @key: The key for which to calculate the index.
 * @size: The size of the hash table.
 *
 * Return: The index for the key within the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
