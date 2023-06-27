#include "main.h"
#include <string.h>

/**
 * puts2 - prints out ecery other character in a
 * string starting from the first
 * @str: string
*/
void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
