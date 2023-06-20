#include "main.h"

/**
	* jack_bauer - prints out the time from
	* 00:00 to 23:59
*/
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i < '0' + 3; i++)
	{
		for (j = '0'; j < '0' + 10; j++)
		{
			for (k = '0'; k < '0' + 6; k++)
			{
				for (l = '0'; l < '0' + 10; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					if (i == '0' + 2 && j == '0' + 3 && k == '0' + 5 && l == '0' + 9)
						break;
				}
			}
		}
	}
}
