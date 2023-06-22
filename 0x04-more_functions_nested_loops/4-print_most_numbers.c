#include "main.h"

/**
* print_most_numbers - print numbers from 0 - 9
* with the exception of 2 and 4 ending with a new line.
*/
void print_most_numbers(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		if (n != ('0' + 2) && n != '0' + 4)
			_putchar(n);
		n++;
	}
	_putchar('\n');
}


