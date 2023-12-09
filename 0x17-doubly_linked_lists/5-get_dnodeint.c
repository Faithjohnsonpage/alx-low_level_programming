#include "lists.h"

/**
 * get_dnodeint_at_index - Function to get node at specific position.
 * @head: the head pointer.
 * @index: the index of the node, starting from 0.
 * Return: the node if it exist, else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	count = 0;
	temp = head; /* Initialize temp with the original head */

	/* Count the number of nodes in the list */
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	/* Check if the index is out of bounds */
	if (index >= count)
		return (NULL);

	/* Reset temp to the original value for iteration */
	temp = head;

	/* Traverse to the specified index */
	for (count = 0; count < index; count++)
	{
		temp = temp->next;
	}

	return (temp);
}
