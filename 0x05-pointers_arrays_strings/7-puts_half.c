#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of the characters in a string
 * if string length is odd prints last n number of characters
 * where n = (len_of_string - 1) / 2
 * @str: string
*/
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);

	if (len % 2 == 0)
		i = len / 2;
	else
		i = len - ((len - 1) / 2);

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
}
