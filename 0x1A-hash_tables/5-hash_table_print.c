#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;
    int first_pair = 1; /* Flag to check if it's the first key/value pair */

    /* Check if the hash table is NULL */
    if (ht == NULL)
        return;

    printf("{");
    /* Iterate through the array of the hash table */
    for (i = 0; i < ht->size; i++)
    {
        /* Iterate through the linked list at each array index */
        node = ht->array[i];
        while (node != NULL)
        {
            /* Print a comma and space before each key/value pair, except for the first pair */
            if (!first_pair)
                printf(", ");
            printf("'%s': '%s'", node->key, node->value);
            first_pair = 0; /* Set the flag to indicate subsequent pairs */
            node = node->next;
        }
    }
    printf("}\n");
}
