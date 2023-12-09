#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - A function to print the elements in the nodes
 * @h: A head pointer
 * Return: The number of elements in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
