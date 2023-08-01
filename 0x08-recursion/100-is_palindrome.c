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
	if (s[n] != s[strlen(s) - n - 1])
		return (0);
	if (n == strlen(s))
		return (1);
	return is_palindrome_num(s++, n++);
}
