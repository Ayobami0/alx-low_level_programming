#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - get the function to execute for the operator @s
 * @s: operator
 *
 * Return: NULL if operator is not found
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
};
	int i;

	i = 0;
	while (i < 6)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
