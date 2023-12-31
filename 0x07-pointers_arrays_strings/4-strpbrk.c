#include "main.h"
#include <string.h>

/**
 * _strpbrk - gets the length of a prefix substring
 * @s: string
 * @accept: character to search
 *
 * Return: pointer to first occurence of
 * a char in accept or NULL if no match is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = s + i;
				return (p);
			}
		}
	}
	return (0);
}
