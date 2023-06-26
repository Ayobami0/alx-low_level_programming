#include "main.h"

/**
 * swap_int - swap the values of two
 * different integers
 * @a: integer a
 * @b: integer b
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
