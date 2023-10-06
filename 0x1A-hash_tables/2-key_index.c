#include "hash_tables.h"
/**
 * key_index - Computes the index for a given key in a hash table.
 *
 * This function computes the index of a given key in a hash table using the
 * DJB2 algorithm and the size of the hash table.
 *
 * @key: The key for which to compute the index.
 * @size: The size of the hash table.
 *
 * Return: The computed index for the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long size)
{
	return (hash_djb2(key) % size);
}
