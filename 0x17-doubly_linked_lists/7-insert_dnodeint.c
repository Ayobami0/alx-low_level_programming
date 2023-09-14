#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Insert a new node at a given index.
 *
 * This function inserts a new node with the specified value 'n' at the
 * given index 'idx' in a doubly linked list. If the index is out of range
 * or memory allocation fails, it returns NULL.
 *
 * @h: Pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node.
 * @n: The integer value to store in the new node.
 *
 * Return: Pointer to the new node or NULL if not inserted.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp, *p_node;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	temp = *h;
	while (temp != NULL)
	{
		if (i == idx)
		{
			p_node = temp->next;

			node->prev = temp->prev;
			node->next = temp;

			temp->prev->next = node;
			temp->prev = node;
			temp->next = p_node;
			return (node);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
