#include "main.h"
#include <string.h>

int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	is_palindrome(s);
	return (1);
}

int is_palindrome_num(char *s, int n)
{
	int len, i;

	len = strlen(s);

	if (s[n] != s[len - n - 1])
		return (0);
	if (n - len)
		return (1);
	return is_palindrome_num(s++, n++);
}
