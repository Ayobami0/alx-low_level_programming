#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Free a doubly linked list.
 *
 * This function frees the memory allocated for a doubly linked list
 * and all its nodes, starting from the end of the list and moving
 * towards the beginning.
 *
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
		head = head->next;

	while (head != NULL)
	{
		temp = head;
		head = head->prev;

		free(temp);
	}
}
