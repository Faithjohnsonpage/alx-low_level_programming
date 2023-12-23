#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/**
 * hash_table_set - Adds or updates an element in a hash table.
 *
 * @ht: A pointer to the hash table.
 * @key: The key, a string, to be added or updated.
 * @value: The value corresponding to the key to be added or updated.
 *
 * Return: 1 if the operation is successful, 0 otherwise.
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode, *current_node;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	/* Check if the key already exists */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			/* Update the value and return success */
			free(current_node->value);
			current_node->value = strdup(value);

			if (current_node->value == NULL)
				return (0);

			return (1);
		}
		current_node = current_node->next;
	}
	/* Key does not exist */
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);

	if (newnode->key == NULL || newnode->value == NULL)
	{
		free(newnode->key);
		free(newnode->value);
		free(newnode);
		return (0);
	}
	/* Insert new node at the beginning of the linked list */
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
