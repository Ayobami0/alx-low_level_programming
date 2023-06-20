#include <stdio.h>
#include "main.h"
/**
* print_to_98 - Prints all natural numbers
* from number n to 98
* @n: start number
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
	}
	printf("%d", 98);
}

