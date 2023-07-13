#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates b amount of space in memory and
 * returns the address of the allocated space
 * @b: amount of space to allocate
 *
 * Return: pointer to 98 if malloc failed
 * pointer to array on success.
*/
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
		exit(98);
	return (array);
}
