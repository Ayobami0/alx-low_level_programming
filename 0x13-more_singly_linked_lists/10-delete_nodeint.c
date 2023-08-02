#include "lists.h"
#include <stdlib.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *to_remove;

	tmp = *head;
	for (i = 0; tmp->next != NULL; i++)
	{
		if (i == index - 1)
		{
			to_remove = tmp->next;
			tmp->next = tmp->next->next;

			free_listint2(&to_remove);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
