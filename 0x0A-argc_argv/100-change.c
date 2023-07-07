#include "stdio.h"
#include <stdlib.h>

/**
 * main - entry point of this program
 * prints the amount of change to give
 * for an amount of money
 * @argc: number of argument
 * @argv: the arguments
 *
 * Return: (1) if an error was encoutered and
 * (0) if not
*/
int main(int argc, char *argv[])
{
	int amount, i, change;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	change = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		change += amount / coins[i];
		amount %= coins[i];
	}

	printf("%d\n", change);
	return (0);
}
