#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*	str_concat - returns a pointer to a newly
*	allocated space in memory which contains
*	the contents of s1, followed by the contents
*	of s2, and null terminated
*	@s1: string to concat
*	@s2: string to concat
*
*	Return: the address to the new string
*/
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, size_s1, size_s2;

	size_s1 = s1 == NULL ? 0 : strlen(s1);
	size_s2 = s2 == NULL ? 0 : strlen(s2);
	arr = malloc(size_s2 + size_s1 + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size_s1; i++)
	{
		arr[i] = s1[i];
	}
	for (i = i; i < size_s1 + size_s2; i++)
	{
		arr[i] = s2[i - size_s1];
	}
	arr[i] = '\0';

	return (arr);
}

