#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments
 * recived from main.
 * @ac: argument count
 * @av: argument values
 *
 * Return: pointer to the new string
 * NULL if ac == 0 or av == NULL
 * on error, return NULL
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, total_len;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]);

	arr = malloc(sizeof(char) * (total_len - ac));

	if (arr == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j <= (int)strlen(av[i]); j++, k++)
		{
			if (j == (int)strlen(av[i]))
				arr[k] = '\n';
			else
				arr[k] = av[i][j];
		}
	}
	return (arr);
}
