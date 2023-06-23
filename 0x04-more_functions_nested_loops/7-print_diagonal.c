#include "main.h"

/**
* print_diagonal - print \\ at the
* postion specified in @n
* @n: position to print \\.
*/
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
			_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}

