#include <stdio.h>

/**
* main - Prints out all lowercase letters
*
* Return: int 0
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
