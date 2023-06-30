#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string to enacode
 *
 * Return: encoded string
*/
char *rot13(char *s)
{
	int i;
	/*
	 * alpha_upper and alpha_lower represents the letters in
	 * the alphabet with their position swapped 13 places
	*/
	char alpha_upper[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char alpha_lower[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] < 91 && s[i] > 64)
			/*
			 * This line is to swap the char at position i in s
			 * with the char at pos i in alpha_upper.
			 */
			s[i] = alpha_upper[s[i] - 65];
		else if (s[i] < 123 && s[i] > 96)
			s[i] = alpha_lower[s[i] - 97];
		else
			s[i] = s[i];
	return (s);
}
