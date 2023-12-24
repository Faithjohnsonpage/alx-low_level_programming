#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
shash_node_t *create_shash_node(const char *key, const char *value);


/**
 * shash_table_create - Creates a new sorted hash table
 * @size: The size of the array in the hash table
 *
 * Return: A pointer to the newly created hash table or NULL if an error occurs
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = calloc(ht->size, sizeof(shash_node_t *));

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);

}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: A pointer to the sorted hash table
 * @key: The key string for the new element
 * @value: The value string for the new element
 *
 * Return: 1 if successful, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *newnode, *current, *prev;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	newnode = create_shash_node(key, value);

	if (newnode == NULL)
		return (0);

	current = ht->shead;
	prev = NULL;

	while (current != NULL && strcmp(key, current->key) > 0)
	{
		prev = current;
		current = current->snext;
	}

	if (prev == NULL)
	{
		/* Insert at the beginning */
		newnode->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = newnode;
		ht->shead = newnode;
	}
	else
	{
		/* Insert in the middle or at the end */
		newnode->snext = prev->snext;
		newnode->sprev = prev;
		if (prev->snext != NULL)
			prev->snext->sprev = newnode;
		prev->snext = newnode;
	}

	/* Update the tail of the sorted linked list if needed */
	if (newnode->snext == NULL)
		ht->stail = newnode;

	/* Insert into the hash table array (chained linked list) */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newnode;
	}
	else
	{
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}

	return (1);
}

/**
 * create_shash_node - Creates a new sorted hash node
 * @key: The key string for the new node
 * @value: The value string for the new node
 *
 * Return: A pointer to the newly created node, or NULL if an error occurs
 */

shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *newnode = malloc(sizeof(shash_node_t));

	if (newnode == NULL)
		return (NULL);

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;
	newnode->snext = NULL;
	newnode->sprev = NULL;

	return (newnode);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: A pointer to the sorted hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;

	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);

		if (node->snext != NULL)
			printf(", ");

		node = node->snext;
	}
	printf("}\n");

}


/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: A pointer to the sorted hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;

	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);

		if (node->sprev != NULL)
			printf(", ");

		node = node->sprev;
	}
	printf("}\n");

}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: A pointer to the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	/* Free each node in the sorted linked list */
	node = ht->shead;
	while (node != NULL)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	/* Free the array and the hash table structure */
	free(ht->array);
	free(ht);
}
