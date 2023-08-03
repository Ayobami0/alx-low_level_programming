#include "main.h"
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - convert a number in binary to unsigned int
 * @b: binary number has a pointer to an array of char
 *
 * Return: unsigned int representation of @b
 *  0 if @b is NULL or contains other characters which are not 1 & 0s
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, len, i;

	if (b == NULL)
		return (0);

	result = 0;
	len = strlen(b);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			result += pow(2, len - i - 1);
		else if (b[i] == '0')
			result += 0;
		else
			return (0);
	}

	return (result);
}
