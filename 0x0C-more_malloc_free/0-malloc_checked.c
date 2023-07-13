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
	int *FAILED_RETURN;

	*FAILED_RETURN = 98;
	array = malloc(b);

	if (array == NULL)
		return (FAILED_RETURN);
	return (array);
}
