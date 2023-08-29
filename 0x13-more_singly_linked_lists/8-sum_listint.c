#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Computes the sum of all data (n) in a listint_t linked list.
 * @head: A pointer to the head of the list.
 * Return: The sum of all data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
