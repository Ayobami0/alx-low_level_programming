#include "main.h"

/**
* _isdigit - check if letter is a digit.
*@c: character to check
*
* Return: 1 if uppercase
* 0 if not
*/
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}

