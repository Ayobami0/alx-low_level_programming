#include "main.h"
#include <stdlib.h>

/**
*	create_array - creates an array of chars
*	and initializes it with a specific char.
*	@size: size of array
*	@c: char to initialize the array with
*
*	Return: the initialized array
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *arr;
	int i;

	arr = malloc(size);

	for (i = 1; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
