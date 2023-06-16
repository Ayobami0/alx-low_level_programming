#include <stdio.h>

/**
* main - Prints out all lowercase letters in reverse
*
* Return: int 0
*/
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
