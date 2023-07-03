#include "main.h"

/**
 * set_string - sets the value of a pointer @s
 * to a char @to.
 * @s: pointer to a pointer to a char
 * @to: the new string that @s would point to
*/
void set_string(char **s, char *to)
{
	*s = to;
}
