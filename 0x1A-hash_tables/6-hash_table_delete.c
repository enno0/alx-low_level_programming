#include "hash_tables.h"
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