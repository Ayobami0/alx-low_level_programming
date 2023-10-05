#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long size)
{
	return (hash_djb2(key) % size);
}
