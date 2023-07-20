#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum;
	unsigned i;

	va_start(nums, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);

	return (sum);
}
