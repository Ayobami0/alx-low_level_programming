#include "main.h"

/**
 * print_triangle - a function that prints a triangle,
 * followed by a new line.
 * @size: the size of the triangle
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = size - i - 1; j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
