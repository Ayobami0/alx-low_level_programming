#include "main.h"

/**
* print_line - print _ for the number of
* times specified in @n
* @n: number of times to print n
*/
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}

