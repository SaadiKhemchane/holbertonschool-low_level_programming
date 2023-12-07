#include "hash_tables.h"

/**
 * key_index -  Returns the index for a given key in a hash table.
 * @key: The key to calculate the index for.
 * @size: The size of the hash table.
 *
 * Return: The calculated index for the given key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int new_value = hash_djb2(key);
	unsigned long int index = new_value % size;

	return (index);
}
