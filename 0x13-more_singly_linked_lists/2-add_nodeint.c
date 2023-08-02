#include "lists.h"
#include <stdlib.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head, *temp;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->next = NULL;
	new_head->n = n;

	temp = (*head);
	new_head->next = temp;
	(*head) = new_head;

	return (*head);
}
