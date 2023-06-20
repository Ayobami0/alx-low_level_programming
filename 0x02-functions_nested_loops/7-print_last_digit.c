#include "main.h"
/**
* print_last_digit - Prints out the last
* digit in a number.
* @n: The number to convert
*
* Return: The last digit value of n
*/
int print_last_digit(int n)
{
	int last_d;

	if (n < 0)
		last_d = (n * -1) % 10;
	else
		last_d = n % 10;

	_putchar('0' + last_d);
	return (last_d);
}


