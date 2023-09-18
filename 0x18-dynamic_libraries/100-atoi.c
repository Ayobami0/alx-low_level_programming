#include "main.h"


int _atoi(char *s)
{
	int i, num, plus_count, minus_count;

	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			num += (s[i] - 48);
			num *= 10;
		}
		else if (s[i] == '+')
			plus_count++;
		else if (s[i] == '-')
			minus_count++;
	}
	if (plus_count == minus_count || minus_count == 0)
		num = num;
	else if (plus_count != minus_count)
		num *= -1;
	return (num/10);
}
