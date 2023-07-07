#include "stdio.h"

/**
 * main - entry point of this program
 * prints the number of the arguments in a program
 * followed by a newline
 * @argc: number of argument
 * @argv: the arguments
 *
 * Return: (0)
*/
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
