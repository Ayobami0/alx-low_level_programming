#include "main.h"

/**
 * _strcmp - compare string @s1 with @s2
 * and returns a pointer to @dest and terminates
 * @s1: string1
 * @s2: string2
 *
 * Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
