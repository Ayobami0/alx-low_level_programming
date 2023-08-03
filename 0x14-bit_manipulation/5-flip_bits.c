#include "main.h"

/**
 * flip_bits - Count the number of bits needed to
 * transform one number to another.
 *
 * @n: The source unsigned long integer.
 * @m: The destination unsigned long integer.
 *
 * Return: The number of bits needed to flip to transform n to m.
 */
unsigned int flip_bits(unsigned long n, unsigned long m)
{
	unsigned int count;
	int i;
	unsigned int shift_m, shift_n;

	for (i = 31, count = 0; i >= 0; i--)
	{
		shift_m  = (m >> i) & 1;
		shift_n  = (n >> i) & 1;

		if (shift_n != shift_m)
		{
			count++;
		}
	}

	return (count);
}
