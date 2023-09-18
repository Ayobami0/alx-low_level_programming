#include "main.h"
#include <string.h>

/**
 * _strcat - concat string from @src to @dest
 * and returns a pointer to @dest
 * @dest: destination string
 * @src: string added
 *
 * Return: pointer to @dest
*/
char *_strcat(char *dest, char *src)
{
	int i, dest_len;

	dest_len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}
