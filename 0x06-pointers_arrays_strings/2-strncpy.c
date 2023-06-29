#include "main.h"

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


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
