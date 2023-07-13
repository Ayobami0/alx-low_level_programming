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
	int *FAILED_RETURN, failed_return;

	failed_return = 98;
	FAILED_RETURN = &failed_return;
	array = malloc(b);

	if (array == NULL)
		return (FAILED_RETURN);
	return (array);
}
