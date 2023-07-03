#include "main.h"
#include <stdio.h>

/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: character to search
 *
 * Return: pointer to first occurence of
 * @c or NULL if not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s ++[i] == c)
			return (s);
	}
	return (NULL);
}
