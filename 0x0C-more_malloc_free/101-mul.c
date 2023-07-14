#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char *str);
char *rev_string(char *c);
void mul(char *n1, char *n2);
int check_invalid_numbers(char *s);
char *strip_zeros(char *s);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_str("Error");
		exit(98);
	}
	if (check_invalid_numbers(argv[1]) != 0 ||
		check_invalid_numbers(argv[2]) != 0)
	{
		print_str("Error");
		exit(98);
	}

	mul(argv[1], argv[2]);

	return (0);
}
/**
 * check_invalid_numbers - Checks if a string contains only valid numbers.
 * @s: The string to be checked.
 *
 * Return: 0 if the string contains only valid numbers, 1 otherwise.
*/
int check_invalid_numbers(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (!(s[i] >= 48 && s[i] <= 57))
			return (1);
	return (0);
}
/**
 * print_str - Prints a string to stdout.
 * @str: The string to be printed.
 */
void print_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
/**
 * mul - Multiplies two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
*/
void mul(char *n1, char *n2)
{
	int *inter_str, carry, sum,
		len_n1, len_n2, i, j;
	char *result_str;


	len_n1 = strlen(n1);
	len_n2 = strlen(n2);

	inter_str = malloc((len_n1 + len_n2) * sizeof(int));
	result_str = malloc(len_n1 + len_n2);

	n1 = rev_string(n1);
	n2 = rev_string(n2);

	if (*n1 == '0' || *n2 == '0')
	{
		print_str("0");
		free(inter_str);
		return;
	}

	for (i = 0; i < len_n1; i++)
		for (j = 0; j < len_n2; j++)
			inter_str[i + j] += (n1[i] - '0') * (n2[j] - '0');

	for (i = carry = 0; i < len_n2 + len_n1; i++)
	{
		sum = inter_str[i] + carry;
		result_str[i] = (sum % 10) + '0';
		carry = sum / 10;
	}
	result_str[i] = '\0';

	print_str(strip_zeros(rev_string(result_str)));
	free(inter_str);
}
/**
 * rev_string - Reverses a string.
 * @c: The string to be reversed.
 *
 * Return: A pointer to the reversed string.
 */
char *rev_string(char *c)
{
	unsigned int i;
	char zero = '0';
	char temp;

	if (atoi(c) == 0)
	{
		c = &zero;
		return (c);
	}

	for (i = 0; i < strlen(c) / 2; i++)
	{
		temp = c[i];
		c[i] = c[strlen(c) - i - 1];
		c[strlen(c) - i - 1] = temp;
	}
	return (c);
}
/**
 * strip_zeros - Strips leading zeros from a string.
 * @s: The string to be processed.
 *
 * Return: A pointer to the string after stripping leading zeros.
 */
char *strip_zeros(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != 48)
			return (s);
		s++;
	}
	return (s);
}
