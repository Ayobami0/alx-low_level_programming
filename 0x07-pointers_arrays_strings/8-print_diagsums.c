#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of both diagonal of a
 * square array
 * @a: pointer to an int
 * @size: size of the array
*/
void print_diagsums(int *a, int size)
{
	int **p;
	int i, j;
	long int first_sum, second_sum;

	first_sum = second_sum = 0;
	*p = a;

	for (i = 0; i < size; i++)
	{
		first_sum += p[i][i];
		second_sum += p[i][size - i - 1];
	}
	printf("%ld, %ld\n", first_sum, second_sum);
}
