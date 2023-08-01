#include "main.h"
#include <string.h>
int is_palindrome_num(char *s, unsigned int n);


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if @s is palidrome and 0 if not
*/
int is_palindrome(char *s)
{
	return (is_palindrome_num(s, 0));
}

/**
 * is_palindrome_num - helper function for is_palindrome
 * @s: string
 * @n: current number
 *
 * Return: 1 if @s is palidrome and 0 if not
*/
int is_palindrome_num(char *s, unsigned int n)
{
	if (s[n] != s[strlen(s) - n - 1])
		return (0);
	if (n == strlen(s))
		return (1);
	return is_palindrome_num(s++, n++);
}
