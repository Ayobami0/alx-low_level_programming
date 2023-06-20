#include "main.h"

/**
* print_alphabet_x10 - Prints out lowercase letters
* Print out lowercase letters of the
* alphabets 10 times
*
* Return: 0
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

