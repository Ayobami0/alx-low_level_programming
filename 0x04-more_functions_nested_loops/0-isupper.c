#include "main.h"

/**
* _toupper - check if letter is uppercase.
*
* Return: 1 if uppercase
* 0 if not
*/
int _toupper(int c)
{
	if (c <=90 && c >= 41)
	{
		return (1);
	}
	return 0;
}
