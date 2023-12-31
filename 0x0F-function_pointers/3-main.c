#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main entry to program
 * @argc: argument count
 * @argv: command line argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	op_t operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (
		strcmp(argv[2], "%") != 0
		&& strcmp(argv[2], "+") != 0
		&& strcmp(argv[2], "-") != 0
		&& strcmp(argv[2], "/") != 0
		&& strcmp(argv[2], "*") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0
		&& (strcmp(argv[2], "/") == 0
			|| strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation.op = argv[2];
	operation.f = get_op_func(argv[2]);

	printf("%i\n", operation.f(num1, num2));

	return (0);
}
