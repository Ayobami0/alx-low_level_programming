#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

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
										|| format[i] == 'c' ))
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(v_args);
}
