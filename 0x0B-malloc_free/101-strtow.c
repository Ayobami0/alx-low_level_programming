#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_words(char *s);

/**
 * strtow - returns a pointer to an
 * array of strings (words)
 * @str: string to exract words from
 *
 * Return: pointer to an array of strings
 * NULL if str == NULL or str == ""
 * on error, return NULL
*/
char **strtow(char *str)
{
	int i, j, k, start_count, letter_count;
	char **arr;

	if (str[0] == 0 || str == NULL || count_words(str) == 0)
		return (NULL);

	start_count = letter_count = 0;

	arr = malloc(
		(sizeof(char *) * count_words(str)) + sizeof(char **));

	if (arr == NULL)
		return (NULL);

	for (i = j = start_count = 0;; i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			letter_count++;
			start_count = 1;
		}
		else if ((str[i] == ' ' || str[i] == '\0') && start_count != 0)
		{
			arr[j] = malloc(sizeof(char) * letter_count);
			if (arr[j] == NULL)
				return (NULL);
			for (k = 0; k < letter_count; k++)
				arr[j][k] = *(str + i - (letter_count - k));
			j++;
			start_count = 0;
			letter_count = 0;
		}
		if (str[i] == '\0')
			break;
	}
	return (arr);
}

/**
 * count_words - counts the number of words in a
 * string.
 * Words are seperated by space
 * @s: string
 *
 * Return: number of words
*/
int count_words(char *s)
{
	int i, total_words, start_count;

	total_words = start_count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] != ' ') && (start_count == 0))
		{
			total_words++;
			start_count = 1;
		}
		else if (s[i] == ' ')
			start_count = 0;
	}
	return (total_words);
}
