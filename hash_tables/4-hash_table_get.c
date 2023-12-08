#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key from a hash table.
 * @ht: A pointer to the hash table
 * @key: the key to search for in the hash table
 *
 * Return: The value associated with the key, or null if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i = 0;
	hash_node_t *node = NULL;


	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
