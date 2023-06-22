#include "main.h"

/**
* print_numbers - print numbers from 0 - 9
* ending with a new line.
*/
void print_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		_putchar(n++);
	}
	_putchar('\n');
}

