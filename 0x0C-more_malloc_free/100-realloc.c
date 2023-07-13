#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocate an already allocated block of memory
 * @ptr: memory to reallocate
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: pointer to new bloack of memory
 *
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	arr = malloc(new_size);
	/* memcpy(arr, ptr, new_size); */
	/* free(ptr); */
	for (i = 0; i < new_size && i < old_size; i++)
		arr[i] = *((char *)ptr + i);
	free(ptr);
	return (arr);
}
