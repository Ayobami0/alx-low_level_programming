#include "main.h"
#include <stdio.h>

/**
 * _strspn -  gets the length of a prefix substring
 * @s: string
 * @accept: character to search
 *
 * Return: number of bytes in the
 * initial segment of @s which
 * consist only of bytes from @accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept +  j) != '\0'; j++)
			if (*(accept + j) == *(s + i))
			{
				count++;
				break;
			}
		if (*(accept + j) == '\0')
			break;
	}
	return (count);
}
