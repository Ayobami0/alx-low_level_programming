#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hash_node, *tmp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		hash_node = ht->array[i];
		if (hash_node != NULL)
		{
			while(hash_node->next != NULL)
			{
				tmp = hash_node->next;
				hash_node->next = hash_node->next->next;
				tmp->next = NULL;
				free(tmp->value);
				free(tmp->key);
				free(tmp);
			}
			free(hash_node->value);
			free(hash_node->key);
		}
		free(hash_node);
	}
	free(ht->array);
	free(ht);
}
