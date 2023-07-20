#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints a variable number of integers with a separator.
 *
 * @separator: A string used to separate the printed integers (can be NULL).
 * @n: The number of integers to be printed.
 * @...: A variable number of integers to be printed (comma-separated).
 *
 * Description: This function takes a variable number of integer arguments and
 * prints them, separated by the specified separator string (if provided).
 * The number of integers to be printed is determined by the 'n' parameter.
 * If 'separator' is NULL, no separator is added between the integers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && (i != n - 1))
			printf("%s", separator);
	}

	va_end(nums);
	printf("\n");
}
