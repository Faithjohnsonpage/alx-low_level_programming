#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 *
 * @ht: A pointer to the hash table.
 * @key: The key, a string, for which to retrieve the associated value.
 *
 * Return: The value associated with the key, or NULL if key is not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}

	return (NULL);
}
