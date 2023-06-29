#include "main.h"
#include <string.h>

/**
 * _strncpy - copy string from @src to @dest
 * and returns a pointer to @dest and terminates
 * the result after @n of bytes
 * @dest: destination string
 * @src: string to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
