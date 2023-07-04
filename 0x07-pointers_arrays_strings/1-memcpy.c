#include "main.h"

/**
 * _memcpy - copies @n bytes from
 * memory area @src to memory area @dest
 * @dest: destination
 * @src: source
 * @n: amount of bytes to copy
 *
 * Return: pointer to char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p;

	p = dest;

	for (i = 0; i < n; i++)
	{
		*(p + i) = src[i];
	}
	return (p);
}
