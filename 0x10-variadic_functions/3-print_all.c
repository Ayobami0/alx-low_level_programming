#include "variadic_functions.h"
#include <stdio.h>

void print_all(const char *const format, ...)
{
	va_list v_args;
	int i;


	i = 0;
	while (format[i] != '\0')
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
				printf("%lf", va_arg(v_args, double));
				break;
			case 's':
				if (va_arg(v_args, char *) == NULL)
					printf("(nil)");
				else
					printf("%s", va_arg(v_args, char *));
				break;
		}
		i++;
	}
	printf("\n");
}
