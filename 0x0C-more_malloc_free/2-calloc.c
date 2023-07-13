#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates a block of memory of size @size
 * for @nmemb number of members
 * @nmemb: number of members in allocated array
 * @size: size of memory to allocate
 *
 * Return: NULL on failure (insufficient memory or 0 size)
 * address of block of memory allocated
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	int i, arr_len;

	arr_len = size * nmemb;
	arr = malloc(arr_len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < arr_len; i++)
		arr[i] = 0;

	return (arr);
}
