#include "lists.h"
#include <stdlib.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head, *temp;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return NULL;

	temp = (*head)->next;
	new_head->next = temp;
	new_head->n = n;
	(*head)->next = new_head;

	return (*head);
}
