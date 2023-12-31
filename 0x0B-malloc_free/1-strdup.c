#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*	_strdup - returns a pointer to a newly
*	allocated space in memory, which contains
*	a copy of the string given as a parameter.
*	@str: string to copy to new array
*
*	Return: the address to the new string
*/
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	arr = malloc(size + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
