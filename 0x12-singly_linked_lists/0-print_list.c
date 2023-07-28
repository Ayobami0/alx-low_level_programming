#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - Print the elements of a linked list.
 *
 * This function iterates through the linked list starting
 * from the given head node and prints the index,
 * string length, and content of each node in the list.
 * If a node's string is NULL, it will be printed as "(nil)".
 *
 * @h: Pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the linked list.
*/
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *start;

	start = h;
	i = 0;
	while (start != NULL)
	{
		if (start->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", start->len, start->str);

		start = start->next;
		i++;
	}
	return (i);
}
