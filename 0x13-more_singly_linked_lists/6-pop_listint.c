#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *storage_node;

	if (*head == NULL)
		return (0);
	if ((*head)->next == NULL)
		return (0);

	storage_node = (*head)->next;

	(*head)->next = NULL;
	return ((*head)->n);
}
