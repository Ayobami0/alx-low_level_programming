#include "function_pointers.h"

/**
 * print_name - print @name using the function passed to it
 * @name: string to print
 * @f: function to execute with name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
