#include "main.h"

/**
* main - Main entry to function
* Prints out the lowercase letters of the alphabets followed by a new line
*
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
