#include "lists.h"

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int count;

	if (head == NULL || head->next == NULL)
		return (0);
	temp = head;
	count = 0;
	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
