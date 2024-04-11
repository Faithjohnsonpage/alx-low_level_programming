#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a singly linked list using jump search.
 * @list: Pointer to the head of the list.
 * @size: The number of elements in the list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first occurrence of the value in the list, or NULL if
 * the value is not found or the list is empty.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i;
	listint_t *high, *prev;

	if (list == NULL)
		return (NULL);

	jump = sqrt(size);
	high = list;
	prev = NULL;

	while (high->next != NULL && high->index < size && high->n < value)
	{
		prev = high;
		for (i = 0; high->next != NULL && i < jump; i++)
			high = high->next;
		printf("Value checked at index [%lu] = [%d]\n", high->index, high->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, high->index);

	while (prev != NULL && prev->index <= high->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
		{
			return (prev);
		}
		prev = prev->next;
	}

	return (NULL);
}
