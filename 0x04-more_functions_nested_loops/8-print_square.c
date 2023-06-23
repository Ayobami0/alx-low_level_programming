#include "main.h"

/**
* print_square - print @n x @n
* squares
* @n: size of square.
*/
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
				_putchar('#');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}

