#include "main.h"

/**
 * clear_bit - Clear a bit at a specific index in an unsigned long integer.
 *
 * @n: Pointer to the unsigned long integer to clear a bit on.
 * @index: The index of the bit to be cleared (between 0 and 31).
 *
 * Return: 1 if the bit was successfully cleared,
 * or -1 if the index is out of range.
 */
int clear_bit(unsigned long *n, unsigned int index)
{
	if (index > 31)
		return (-1);


	*n = (*n) & ~(1UL << index);

	return (1);
}
