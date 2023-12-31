#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints the elements of a listint_t linked list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
