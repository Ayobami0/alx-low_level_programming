#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - Add a new node at the beginning of a doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The integer value to store in the new node.
 *
 * Return: A pointer to the newly added node, or NULL if
 * memory allocation fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = *head;
	temp->n = n;
	temp->prev = NULL;

	*head = temp;

	return (*head);
}
