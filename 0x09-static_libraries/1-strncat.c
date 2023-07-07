#include "main.h"
#include <string.h>

/**
 * _strncat - concat string from @src to @dest
 * and returns a pointer to @dest and terminates
 * the result after @n of bytes
 * @dest: destination string
 * @src: string added
 * @n: number of bytes till null termination "\0"
 *
 * Return: pointer to @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = strlen(dest);

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i + 1] = '\0';

	return (dest);
}
