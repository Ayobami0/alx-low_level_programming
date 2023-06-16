#include <stdio.h>

/**
* main - Prints out all letters of the alphabet
*
* Return: int 0
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
