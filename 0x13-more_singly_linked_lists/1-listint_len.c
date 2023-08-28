#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Counts the number of elements in a listint_t linked list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
