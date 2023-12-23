#include "hash_tables.h"

/**
 * hash_table_create - Function to create new hash table.
 * @size: The capacity of the table.
 * Return: The created table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;

	ht->array = calloc(ht->size, sizeof(hash_node_t *));

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
