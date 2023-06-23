#include <unistd.h>
#include "main.h"

/**
* more_numbers - print numbers from 0 - 14
* 10x ending with a new line.
*/
void more_numbers(void)
{
	int n, i;

	n = 0;
	while (n < 10)
	{
		for (i = 0; i < 15; i++)
			print_number_as_char(i);
		_putchar('\n');
		n++;
	}
}

/**
* print_number_as_char - prints @n as a string
* @n: the number to print
*/
void print_number_as_char(int n)
{
	char buffer[20], temp;
	int index, i;

	index = 0;
	do {
		buffer[index++] = '0' + (n % 10);
		n /= 10;
	} while (n > 0);

	for (i = 0; i < index / 2; i++)
	{
		temp = buffer[i];
		buffer[i] = buffer[index - i - 1];
		buffer[index - i - 1] = temp;
	}
	write(1, buffer, index);
}
