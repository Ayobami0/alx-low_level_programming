#include <stdio.h>
#include <sys/cdefs.h>

/**
 * main - entry point of this program
 * prints the name of the program followed by a
 * newline
 * @argc: number of argument
 * @argv: the arguments
 *
 * Return: (0)
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
