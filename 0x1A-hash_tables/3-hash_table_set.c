#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node;
	hash_node_t *temp;
	char *val_cpy, *key_cpy;

	if (ht == NULL || *key == '\0')
		return (0);

	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);
	key_cpy = strdup(key);
	if (key_cpy == NULL)
		return (0);

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);
	hash_node->key = (char *)key_cpy;
	hash_node->value = val_cpy;
	index = key_index((unsigned const char *) key_cpy, ht->size);
	if (ht->array == NULL)
		return (0);
	if (ht->array[index] == NULL)
	{
		hash_node->next = NULL;
		ht->array[index] = hash_node;
	} else
	{
		temp = ht->array[index];
		hash_node->next = temp;
		ht->array[index] = hash_node;
	}
	return (1);
}
