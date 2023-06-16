#include <stdio.h>

/**
* main - Prints out numbers 0-9 from their ascii codes
*
* Return: int 0
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
