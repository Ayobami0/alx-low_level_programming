#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Add a new node to the beginning of a linked list.
 *
 * This function creates a new node, initializes its values with the given
 * string and its length, and inserts it at the beginning of the linked list.
 *
 * @head: Pointer to the pointer to the head node of the linked list.
 *              The function will update this pointer to point to the new
 *              head.
 * @str: Pointer to the string that
 * will be stored in the new node.
 *
 * Return: Pointer to the newly created node (new head),
 * or NULL if allocation fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_next;

	new_next = *head;
	*head = malloc(sizeof(list_t));
	if (!(*head))
		return (NULL);

	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	(*head)->next = new_next;

	return (*head);
}
