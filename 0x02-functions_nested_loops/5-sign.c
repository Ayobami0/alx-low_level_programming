#include "main.h"
/**
* print_sign - Check the sign on numbers
* @n: The number to check
*
* Return: int 0 if n == zero
* and 1 if n > 0
* and -1 if n < 0
*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}

