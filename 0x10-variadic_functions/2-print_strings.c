#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints a variable number of strings with a separator.
 *
 * @separator: A string used to separate the printed strings (can be NULL).
 * @n: The number of strings to be printed.
 * @...: A variable number of strings to be printed (comma-separated).
 *
 * Description: This function takes a variable number of string arguments and
 * prints them, separated by the specified separator string (if provided).
 * If a string argument is NULL, it prints "(nil)" instead.
 * The number of strings to be printed is determined by the 'n' parameter.
 * If 'separator' is NULL, no separator is added between the strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v_args;
	unsigned int i;
	char *str;

	va_start(v_args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(v_args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && (i != n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
