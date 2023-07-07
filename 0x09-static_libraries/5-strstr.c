#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: string to search in
 * @needle: string to locate
 *
 * Return: pointer to substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *p;

	p = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == '\0')
			return (haystack);
		for (k = 0, j = i;;)
		{
			if (haystack[j++] != needle[k++])
				break;
			if (needle[k] == '\0')
			{
				p = haystack + i;
			}
		}
	}
	return (p);
}
