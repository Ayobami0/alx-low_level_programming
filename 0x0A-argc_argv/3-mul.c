#include "stdio.h"
#include <stdlib.h>

/**
 * main - entry point of this program
 * prints the result of the multiplication of 2
 * numbers
 * @argc: number of argument
 * @argv: the arguments
 *
 * Return: (1) if an error was encoutered and
 * (0) if not
*/
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%i\n", a * b);
	return (0);
}
