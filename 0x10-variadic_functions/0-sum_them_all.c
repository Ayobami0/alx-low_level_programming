#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of a variable number of integers.
 *
 * @n: The number of integers to be summed.
 * @...: A variable number of integers to be summed (comma-separated).
 *
 * Return: The sum of all the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum;
	unsigned int i;

	va_start(nums, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);

	return (sum);
}
