#include "lists.h"
#include <stdlib.h>

void free_listint2(listint_t **head)
{
	listint_t *curr;

	while (*head != NULL)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}
	head = NULL;
}
