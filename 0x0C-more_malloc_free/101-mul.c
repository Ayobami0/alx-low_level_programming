#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char *str);
char *rev_string(char *c);
void mul(unsigned long n1, unsigned long n2);
char *itoa(unsigned long n);
int n_count(unsigned long n);

int main(int argc, char *argv[]) {
	unsigned long num1, num2;

	if (argc != 3)
	{
		print_str("Failed");
		exit(98);
	}
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
	{
		print_str("Failed");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul(num1, num2);

    return (0);
}


void print_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

void mul(unsigned long n1, unsigned long n2)
{
	unsigned long result;
	char *str;

	result = n1 * n2;
	str = itoa(result);
	print_str(str);
	free(str);
}
char *itoa(unsigned long n)
{
	char *str;
	int i;

	str = malloc(n_count(n) + 1);
	i = 0;
	while (n != 0)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
		i++;
	}
	str[i] = '\0';
	str = rev_string(str);
	return (str);
}
char *rev_string(char *c)
{
	char *str;
	unsigned int i;


	str = malloc(strlen(c) + 1);

	for (i = 0; i < strlen(c); i++)
		str[i] = c[strlen(c) - i - 1];
	str[i] = '\0';
	return (str);
}
int n_count(unsigned long n)
{
	int count;

	count = 0;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}
