#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of the bit at index
 * @n: number
 * @index: index to get
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long n, unsigned int index)
{
	unsigned long tmp;

	if (index > 31)
		return (-1);

	tmp = n;

	tmp = (tmp >> (index)) & 1;

	return (tmp);
}
