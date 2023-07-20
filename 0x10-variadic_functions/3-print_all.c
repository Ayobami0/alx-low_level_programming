#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - Prints a variable number of arguments based on the format.
 *
 * @format: A string containing the format specifiers for each argument.
 * @...: A variable number of arguments to be printed (comma-separated).
 *
 * Description: This function takes a format string followed by a variable
 * number of arguments and prints them according to the specified format.
 * The format string can contain the following specifiers:
 *   - 'c': Character specifier. Expects an int argument,
 *          prints it as a character.
 *   - 'i': Integer specifier. Expects an int argument,
 *          prints it as an integer.
 *   - 'f': Float specifier. Expects a double argument, prints
 *          it as a floating-point number.
 *   - 's': String specifier. Expects a char* argument,
 *          prints it as a string.
 * If the argument is NULL, it prints "(nil)" instead.
 */
void print_all(const char *const format, ...)
{
	va_list v_args;
	unsigned int i;
	char *str;

	va_start(v_args, format);

	i = 0;
	while (i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(v_args, int));
				break;
			case 'i':
				printf("%i", va_arg(v_args, int));
				break;
			case 'f':
				printf("%f", va_arg(v_args, double));
				break;
			case 's':
				str = va_arg(v_args, char *);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if (i != strlen(format) - 1 && (format[i] == 'i'
										|| format[i] == 'f'
										|| format[i] == 's'
										|| format[i] == 'c'))
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(v_args);
}
