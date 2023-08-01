#include "lists.h"
#include <stddef.h>
#include <stdio.h>

size_t print_listint(const listint_t *h)
{
	size_t i;

	for(i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
	}
	return (i);
}
