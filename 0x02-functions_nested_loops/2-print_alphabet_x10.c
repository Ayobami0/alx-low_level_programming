#include "main.h"

/**
* print_alphabet - Prints out lowercase letters
* Print out lowercase letters of the
* alphabets followed by a new line
*
* Return: 0
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++) {
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

