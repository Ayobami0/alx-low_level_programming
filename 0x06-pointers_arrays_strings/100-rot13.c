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
	char alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		if ((s[i] < 91 && s[i] > 64) || (s[i] < 123 && s[i] > 96))
			/*
			 * This line swaps the char at position i in s
			 * with the char at pos i in alpha.
			 *
			 * the calclation (alpha[s[i] - 65 - ((s[i] / 91) * 6)])
			 * find the position of char s[i] and get the char at that
			 * position in alpha
			 */
			s[i] = alpha[s[i] - 65 - ((s[i] / 91) * 6)];
	return (s);
}
