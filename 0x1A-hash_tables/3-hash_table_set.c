#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to add/update the key/value pair
 * @key: The key to add/update
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current;

    /* Check if the hash table, key, or value is NULL */
    if (ht == NULL || key == NULL || value == NULL)
        return 0;

    /* Get the index for the key using the hash function */
    index = key_index((unsigned char *)key, ht->size);

    /* Check if the key already exists in the linked list at the index */
    current = ht->array[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            /* Key found, update the value and return */
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return 0;
            return 1;
        }
        current = current->next;
    }

    /* Key not found, create a new node and add it at the beginning of the list */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return 0;

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return 0;
    }

    /* Add the new node at the beginning of the list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}
