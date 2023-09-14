#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - Add node to end.
 *
 * @head: Pointer to list's head.
 * @n: Integer value for new node.
 *
 * Return: Pointer to new node or NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *cpy;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;
	temp->prev = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	cpy = *head;
	while (cpy->next != NULL)
	{
		cpy = cpy->next;
	}
	cpy->next = temp;
	temp->prev = cpy;

	return (*head);
}
