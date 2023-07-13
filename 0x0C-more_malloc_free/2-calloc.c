#include "main.h"
#include <stdio.h>
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
	unsigned int i, arr_len;

	arr_len = nmemb * sizeof(int);
	arr = malloc(arr_len);

	if (arr == NULL || nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		arr[i] = 0;

	return (arr);
}
