#include <stdio.h>
#define STOP 58 /* : in ascii. 9 is 58 - 1 */
#define START 48 /* 0 in ascii */

/**
* main - prints out 3 digit combinations of digits from 0-9
* Each digits are unique and there is no repetiton of combination
* All combinations are in accending order.
*
* Return: 0
*/
int main(void)
{
	int i, j, k, l;

	for (i = START; i < STOP; i++)
	{
		for (j = START; j < STOP; j++)
		{
			for (k = START; k < STOP; k++)
			{
				for (l = j+1; l < STOP; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
