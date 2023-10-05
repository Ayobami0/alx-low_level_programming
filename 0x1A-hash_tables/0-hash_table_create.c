#include "hash_tables.h"
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size) {
  hash_table_t *hash_table;
  hash_node_t **array;
  unsigned long int i;

  hash_table = malloc(sizeof(hash_table_t));
  array = malloc(sizeof(hash_node_t *) * size);

  hash_table->array = array;
  hash_table->size = size;

  return (hash_table);
}
