#include "lists.h"
#include <stddef.h>
#include <stdio.h>

size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *tmp;

	tmp = h;
	for(i = 0; tmp != NULL; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
