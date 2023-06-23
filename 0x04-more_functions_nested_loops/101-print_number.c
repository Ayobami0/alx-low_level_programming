#include "main.h"

/**
 * print_number - prints out the given number
 * @n: number to print out
*/
void print_number(int n)
{
	int stored_reverse, is_negative;

	stored_reverse = 0;
	is_negative = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/*check if number is nagative and change is_negative flag*/
	if (n < 0)
	{
		n = -n;
		is_negative = 1;
	}
	/*Reverse number and store reversed value*/
	while (n > 0)
	{
		stored_reverse = stored_reverse * 10 + (n % 10);
		n /= 10;
	}
	if (is_negative == 1)
		_putchar('-');
	while (stored_reverse > 0)
	{
		_putchar((stored_reverse % 10) + '0');
		stored_reverse /= 10;
	}
}
