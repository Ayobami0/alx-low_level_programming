#include "function_pointers.h"

/**
 * int_index - gets the index of the element
 * in @array that doesnt return zero if passed
 * as a parameter to @cmp
 * @array: array
 * @size: size of array
 * @cmp: fnction to compare element in @array
 *
 * Return: -1 if no match is found
 * index of element in @array if match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
