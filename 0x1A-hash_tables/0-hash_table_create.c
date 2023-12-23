#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i = 0;

    hash_table_t *new_table = malloc(sizeof(hash_table_t));
    new_table->size = size;
    new_table->array = malloc(sizeof(hash_node_t *) * size);

    if (new_table == NULL)
    {
        perror("Error creating hash table");
        return NULL;
    }

    if (new_table->array == NULL)
    {
        perror("Error creating hash table array");
        free(new_table);
        return NULL;
    }

    /* Initialize each array element to NULL */
    while (i < size)
    {
        new_table->array[i] = NULL;
        i++;
    }

    return new_table;
}

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i = 0;

    if (ht == NULL)
        return;

    while (i < ht->size)
    {
        hash_node_t *current = ht->array[i];
        while (current != NULL)
        {
            hash_node_t *temp = current;
            current = current->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
        i++;
    }
    free(ht->array);
    free(ht);
}