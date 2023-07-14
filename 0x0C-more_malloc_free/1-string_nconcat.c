#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 * string_nconcat - concat two strings
 * Adds s1 followed by n char of s2 to a newly allocted array
 * @s1: string 1
 * @s2: string 2
 * @n: number of chars of s2 to add
 *
 * Return: new array of char which is the combination
 * of the two string or NULL if function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int arr_len, i;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';

	arr_len = n < strlen(s2)
		? strlen(s1) + n
		: strlen(s1) + strlen(s2);
	arr = malloc(arr_len + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < arr_len; i++)
	{
		if (i < (int)strlen(s1))
			arr[i] = s1[i];
		else
			arr[i] = s2[i - (int)strlen(s1)];
	}
	arr[i] = '\0';

	return (arr);
}
