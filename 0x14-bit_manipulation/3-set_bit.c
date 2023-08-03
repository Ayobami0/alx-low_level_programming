#include "main.h"
/**
 * set_bit - Set a bit at a specific index in an unsigned long integer.
 *
 * @n: Pointer to the unsigned long integer whose bit is to be set.
 * @index: The index of the bit to be set (between 0 and 31).
 *
 * Return: 1 if the bit was successfully set,
 * or -1 if the index is out of range.
*/
int set_bit(unsigned long *n, unsigned int index)
{
	if (index > 31)
		return (-1);


	*n = (*n) | (1 << index);

	return (1);
}
