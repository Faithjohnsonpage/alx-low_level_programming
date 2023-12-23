#include "hash_tables.h"

/**
 * hash_table_delete - Deallocates memory used by a hash table and its elements
 * @ht: A pointer to the hash table to be deleted.
 *
 * This function frees all dynamically allocated memory used by the hash table
 * pointed to by @ht, including the hash table itself
 * and its linked list elements.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
