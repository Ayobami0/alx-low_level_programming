#include "list.h"
#include <stddef.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h[i].next != NULL; i++)
	{
		if ((h+i)->str == NULL)
			printf("[%d] %s", 0, "(nil)");

		printf("[%d] %s", (h+i)->len, (h+i)->str);
	}
	return (i);
}
