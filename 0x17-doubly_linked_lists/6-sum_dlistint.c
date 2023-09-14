#include "lists.h"
/**
 * sum_dlistint - Calculate the sum of list elements.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of list elements or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
