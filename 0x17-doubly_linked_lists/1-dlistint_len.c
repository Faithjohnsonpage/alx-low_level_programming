#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in the list
 * @h: A head pointer
 * Return: The number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
