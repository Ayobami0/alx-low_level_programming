#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - print the reverse of a string recussively
 * @s: string to reverse
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*(s + strlen(s) - 1));
	_print_rev_recursion(s + 1);
}
