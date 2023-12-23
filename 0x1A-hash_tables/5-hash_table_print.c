#include "hash_tables.h"

/**
 * hash_table_print - Prints the content of a hash table.
 *
 * @ht: A pointer to the hash table.
 *
 * Description: Prints the key-value pairs stored in the hash table.
 * The output format is: '{' key1': 'value1', key2': 'value2', ... '}'.
 * If the hash table or its array is empty, it prints an empty set '{}'.
 */

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *node;
    unsigned long int i;
    unsigned char printed = 0;

    if (ht == NULL)
    {
        return;
    }

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node != NULL)
        {
            if (printed == 1)
            {
                printf(", ");
            }

            printf("'%s': '%s'", node->key, node->value);
            node = node->next;
            printed = 1;
        }
    }
    printf("}\n");
}
