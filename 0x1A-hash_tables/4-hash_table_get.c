#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_get - Retrieves a value associated with a key in the hash table.
 *
 * This function searches for a key in the hash table and, if found,
 * returns the associated value.
 *
 * @ht: The hash table to search in.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *selected_node;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	if (idx >= ht->size)
		return (NULL);

	selected_node = ht->array[idx];

	if (selected_node == NULL)
		return (NULL);

	return (selected_node->value);
}
