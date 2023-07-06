#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - print the reverse of a string recussively
 * @s: string to reverse
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*(s - 1));
	}
}
