#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - Print doubly linked list.
 *
 * Print the elements of a doubly
 * linked list and count nodes.
 *
 * @h: Pointer to list's head.
 *
 * Return: Number of nodes in list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
