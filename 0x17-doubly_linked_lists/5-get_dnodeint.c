#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - Get node at specified index.
 *
 * @head: Pointer to the head of the list.
 * @index: The index of the node to retrieve.
 *
 * Return: Pointer to the node at the index,
 * or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
