#include "main.h"
#include <math.h>
#include <stdio.h>
#include <string.h>



unsigned int raise_pow(unsigned int num, int power);
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
		{
			if ((len - i - 1) == 0)
			{
				result += 1;
				break;
			}
			result += raise_pow(2, len - i - 1);

		}
		else if (b[i] == '0')
			result += 0;
		else
			return (0);
	}

	return (result);
}

/**
 * raise_pow - raise a number to a given power
 * @num: number
 * @power: power
 *
 * Return: the result of the calculation
 */
unsigned int raise_pow(unsigned int num, int power)
{
	/*Recursive solution*/
	/* if (power == 0) */
	/*return (num); */

	/* Loop Solution */
	/* num = (raise_pow(num, power--)); */
	/* return (num); */
	int i, pow;

	pow = num;
	for (i = 0; i < (power - 1); i++)
	{
		num *= pow;
	}
	return (num);
}
