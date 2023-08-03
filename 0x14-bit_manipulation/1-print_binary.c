#include "main.h"
#include <unistd.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 */
void print_binary(unsigned long n)
{
	int i, shift, found_1;

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}
	for (i = 31, found_1 = 0; i >= 0; i--)
	{
		shift = (n >> i) & 1;
		if (shift == 1)
		{
			write(1, "1", 1);
			found_1 = 1;
		}
		else if (shift == 0 && found_1 == 1)
			write(1, "0", 1);
	}
}
