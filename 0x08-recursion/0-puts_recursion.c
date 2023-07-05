#include "main.h"

/**
 * _puts_recursion - copy of the puts function in
 * stdio.h but with recursion
 * @s: string to print
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
