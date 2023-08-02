#include "lists.h"
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node, *curr;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	temp = *head;
	for (i = 0; temp->next != NULL; i++)
	{
		if (i + 1 == idx)
		{
			curr = temp;
			temp = temp->next;
			curr->next = new_node;
			new_node->next = temp;
			new_node->n = n;
			return (new_node);
		}
		temp = temp->next;
	}

	return (NULL);
}
