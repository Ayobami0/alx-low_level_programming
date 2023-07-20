#include "variadic_functions.h"
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v_args;
	unsigned int i;


	va_start(v_args, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(v_args, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(v_args, char *));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
