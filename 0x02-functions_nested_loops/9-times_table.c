#include "main.h"
#include <stdio.h>
#include <unistd.h>

void print_int_as_char(int);
/**
* times_table - Prints out the 9 times table
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			print_int_as_char(i * j);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

void print_int_as_char(int n)
{
	char buffer[5];
	int index, i;
	
	index = 0;

	if (n < 58 && n > 47)
	{
		_putchar(n + '0');
		return;
	}

	do
	{
		buffer[index++] = '0' + (n % 10);
		n = n / 10;
	} while (n > 0);

	for (i = 0; i < index / 2; i++)
	{
		char temp = buffer[i];
		
		buffer[i] = buffer[index - i - 1];
		buffer[index - i - 1] = temp;
	}

	write(1, buffer, index);
}
