#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes an action for each member of an array
 * @array: array
 * @size: size of array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
