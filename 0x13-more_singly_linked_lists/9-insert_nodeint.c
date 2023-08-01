#include "lists.h"
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	for (i = 0; (*head)->next != NULL; i++)
	{
		if (i == idx)
		{
			temp = (*head)->next;
			new_node->next = temp;
			(*head)->next = new_node;
		}
		(*head) = (*head)->next;
	}

	return (NULL);
}
