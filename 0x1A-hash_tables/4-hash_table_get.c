#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in the hash table
 * @ht: The hash table to look into
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *current;

    /* Check if the hash table or key is NULL */
    if (ht == NULL || key == NULL)
        return NULL;

    /* Get the index for the key using the hash function */
    index = key_index((unsigned char *)key, ht->size);

    /* Traverse the linked list at the index to find the key */
    current = ht->array[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return current->value; /* Key found, return the associated value */
        current = current->next;
    }

    return NULL; /* Key not found */
}
