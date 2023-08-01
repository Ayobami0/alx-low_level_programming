#include "lists.h"
#include <stdlib.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	i = 0;
	do
	{
		if (i == index)
		{
			free(*(head));
			return (1);
		}
	}
	while ((*head)->next != NULL);
	return (-1);
}
