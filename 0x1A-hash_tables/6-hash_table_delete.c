#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
/**
 * hash_table_delete - Deletes a hash table.
 *
 * This function deletes a hash table and its associated elements. It frees
 * the memory used by the hash table, its array, and the nodes within the
 * hash table.
 *
 * @ht: The hash table to be deleted.
 */
=======

>>>>>>> origin/main
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
<<<<<<< HEAD
			while (hash_node->next != NULL)
=======
			while(hash_node->next != NULL)
>>>>>>> origin/main
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
