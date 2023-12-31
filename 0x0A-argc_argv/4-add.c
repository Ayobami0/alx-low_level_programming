#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of this program
 * prints the arguments given to a program
 * @argc: number of argument
 * @argv: the arguments
 *
 * Return: (0)
*/
int main(int argc, char *argv[])
{
	int i, sum;

	i = sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && **(argv + i) != 48)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
