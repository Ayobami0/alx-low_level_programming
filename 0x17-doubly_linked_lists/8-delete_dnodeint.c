#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at a given index.
 *
 * This function deletes the node at the specified index 'index' in a doubly
 * linked list. If the index is out of range, it returns -1. If the deletion
 * is successful, it returns 1.
 *
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if deletion is successful, -1 if index is out of range.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp, *del_node;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	while (temp != NULL)
	{
		if (i == index)
		{
			del_node = temp;

			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			if (temp->prev != NULL && temp->next != NULL)
				temp->prev->next = temp->next;
			else
				*head = temp->next;
			del_node->prev = NULL;
			del_node->next = NULL;
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
