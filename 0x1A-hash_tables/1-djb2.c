#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str) {
  unsigned long int hash;
  int i = 0;

  hash = 5381;
  while (str[i] != '\n')
    hash = ((hash << 5) + hash) + str[i++]; /* hash * 33 + c */
  return (hash);
}
