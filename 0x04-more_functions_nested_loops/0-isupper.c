#include "main.h"

/**
* _isupper - check if letter is uppercase.
*@c: character to check
*
* Return: 1 if uppercase
* 0 if not
*/
int _isupper(int c)
{
	if (c <= 90 && c >= 41)
	{
		return (1);
	}
	return (0);
}
