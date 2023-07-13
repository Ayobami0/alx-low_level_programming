#include "main.h"
#include <stdlib.h>


/**
 * array_range - creates an array that contains all values
 * from @min to @max (both included)
 * @min: from this integer
 * @max: to this integer
 *
 * Return: the array of values
*/
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * 2 * (max - min));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i] = i;

	return (arr);
}
