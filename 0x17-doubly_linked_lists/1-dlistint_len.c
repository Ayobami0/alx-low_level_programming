#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len - Get the number of elements in a doubly linked list.
 *
 * This function returns the number of elements (nodes) in a given
 * doubly linked list.
 *
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
