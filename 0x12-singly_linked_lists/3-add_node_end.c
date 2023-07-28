#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Add a new node to the end of a linked list.
 *
 * This function creates a new node, initializes its values with the given
 * string and its length, and appends it to the end of the linked list.
 *
 * @head: Pointer to the pointer to the head node of the linked list.
 *              The function will update this pointer if the list is empty.
 * @str: Pointer to the string that will be stored in the new node.
 *
 * Return: Pointer to the newly created node
 * , or NULL if allocation fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *trav;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->len = strlen(str);
	new_node->next = NULL;
	new_node->str = strdup(str);

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	trav = *head;
	while (trav->next != NULL)
	{
		trav = trav->next;
	}
	trav->next = new_node;

	return (*head);
}
