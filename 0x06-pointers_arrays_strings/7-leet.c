#include "main.h"

/**
 * leet - encode @str to 1332 format
 * @str: string to encode
 *
 * Return: pointer to @str
*/
char *leet(char *str)
{
	int i, j;
	char sub_array[8];

	sub_array[0] = 'O';
	sub_array[1] = 'L';
	sub_array[2] = 'x';
	sub_array[3] = 'E';
	sub_array[4] = 'A';
	sub_array[5] = 'x';
	sub_array[6] = 'x';
	sub_array[7] = 'T';


	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 8; j++)
			if ((str[i] == sub_array[j]) || ((str[i] - 32) == sub_array[j]))
				str[i] = '0' + j;

	return (str);
}
