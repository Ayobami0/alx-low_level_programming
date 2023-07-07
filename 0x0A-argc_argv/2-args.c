#include <stdio.h>

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
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
