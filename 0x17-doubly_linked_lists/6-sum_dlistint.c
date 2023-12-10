#include "lists.h"

/**
 * sum_dlistint - Fuction that sums all the data of dlistint_t linked list.
 * @head: the head pointer
 * Return: the final sum.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
