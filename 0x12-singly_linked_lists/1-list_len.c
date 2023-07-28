#include "lists.h"
#include <stddef.h>
/**
 * list_len - Calculate the length of a linked list.
 *
 * This function iterates through the linked list starting
 * from the given head node and counts the number of nodes
 * in the list.
 *
 * @h: Pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *start;

	start = h;

	i = 0;
	while (start != NULL)
	{
		i++;
		start = start->next;
	}
	return (i);
}
