#include "lists.h"

int pop_listint(listint_t **head)
{
	int val_store;

	if (head == NULL)
		return (0);
	if ((*head)->next == NULL)
		return (0);

	val_store = (*head)->n;

	*head = (*head)->next;
	return (val_store);
}
