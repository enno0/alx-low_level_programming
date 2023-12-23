#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in the hash table array
 * @key: The key to hash
 * @size: Size of the array of the hash table
 *
 * Return: Index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    /* Use the hash_djb2 function to generate the hash value */
    unsigned long int hash_value = hash_djb2(key);

    /* Use modulus to get the index within the array size */
    return (hash_value % size);
}
