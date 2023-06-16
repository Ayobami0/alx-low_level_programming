#include <stdio.h>

/**
* main - prints out 2 digit combinations of digits from 0-9
* Each digits are unique and there is no repetiton of combination
* All combinations are in accending order.
*
* Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
