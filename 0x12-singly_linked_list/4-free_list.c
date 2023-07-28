#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - Frees the memory allocated for a linked list.
 *
 * This function iterates through the linked list
 * starting from the head node and frees the
 * memory for each node, including the head. It sets the `head`
 * pointer to NULL after freeing all the nodes.
 *
 * @head: Pointer to the head node of the linked list.
 */
void free_list(list_t *head)
{
	list_t *current, *nextNode;

	current = head;
	while (current != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
}
