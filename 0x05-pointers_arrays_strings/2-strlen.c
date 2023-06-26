#include "main.h"

/**
 * _strlen - counts the number of characters in
 * a given string @s
 * @s: string to count
 *
 * Return: count
 * number of character i a string
*/
int _strlen(char *s)
{
	int count, i;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
