#include "hash_tables.h"

/**
 * hash_table_create - Function to create new hash table.
 * @size: The capacity of the table.
 * Return: The created table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	table->size = size;

	return (table);
}
