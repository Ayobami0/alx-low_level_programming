#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Prints all key/value pairs in the hash table.
 *
 * This function prints all the key/value pairs in the hash table in the
 * format: '{key': 'value', 'key2': 'value2', ... }'.
 *
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, first_printed = 1;
	hash_node_t *hash_node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			hash_node = ht->array[i];
			while (hash_node != NULL)
			{
				if (i != 0 && !first_printed)
					printf(", ");
				printf("'%s': '%s'", hash_node->key, hash_node->value);
				first_printed = 0;
				hash_node = hash_node->next;
			}
		}
	}
	printf("}\n");
}
