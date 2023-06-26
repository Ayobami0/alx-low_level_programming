#include "main.h"
#include <string.h>

/**
 * print_rev - print the reverse of a string
 * @s: string to reverse
*/
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		_putchar(s[len - 1 - i]);
	}
	_putchar('\n');
}
