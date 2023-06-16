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
	int i, j, k;

	for (i = START; i < STOP; i++)
	{
		for (j = i + 1; j < STOP; j++)
		{
			for (k = j + 1; k < STOP; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != STOP - 3) /* dont output , if at end */
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
