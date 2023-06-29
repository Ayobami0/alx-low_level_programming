#include "main.h"

/**
 * cap_string - capitalize every word in @s
 * @s: string to capitalize
 *
 * Return: string
*/
char *cap_string(char *s)
{
	int i, step;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (step == 0)
			if (s[i] > 96 && s[i] < 123)
				s[i] = s[i] - 32;
		if (
			(s[i] > 96 && s[i] < 123)
			|| (s[i] > 64 && s[i] < 91)
			|| (s[i] > 47 && s[i] < 58))
			step++;
		else
			step = 0;
	}
	return (s);
}
