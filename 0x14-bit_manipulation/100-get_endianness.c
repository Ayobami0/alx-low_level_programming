#include "main.h"

/**
 * get_endianness - Check the endianness of the system.
 *
 * Return:
 * 1 if the system is little-endian, 0 if the system is big-endian.
 */
int get_endianness(void)
{
	int x;

	x = 1;
	return ((char *)&x == 0);
}
