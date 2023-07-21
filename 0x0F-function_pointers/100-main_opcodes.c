#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_opcodes - Prints the opcodes of a given function.
 *
 * @func_ptr: A pointer to the start of the function to print opcodes for.
 * @n: The number of bytes to print as opcodes.
 */
void print_opcodes(const char *func_ptr, unsigned int n)
{
	unsigned int i;
	unsigned char *opcode = (unsigned char *)func_ptr;

	for (i = 0; i < n; i++)
	{
		/* Print the first n bytes of the function */
		printf("%02x", opcode[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * check_if_zero - Checks if a string contains all zeros.
 *
 * @s: The input string to check.
 *
 * Return: 1 if the string contains at least one non-zero character,
 * 0 otherwise.
 */
int check_if_zero(char *s)
{
	int s_len, i;

	s_len = strlen(s);

	for (i = 0; i < s_len; i++)
		if (s[i] != '0')
			return (1);
	return (0);
}

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char **argv)
{
	int count;

	count = atoi(argv[1]);
	void *ret_address;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (count <= 0 && check_if_zero(argv[1]) != 0)
	{
		printf("Error\n");
		exit(1);
	}

	/* Get the return address of the current function (main) */
	ret_address = __builtin_return_address(0);

	/* Call the function to print the opcodes */
	print_opcodes((const char *)ret_address, count);

	return (0);
}
