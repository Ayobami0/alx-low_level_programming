#include "main.h"

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
