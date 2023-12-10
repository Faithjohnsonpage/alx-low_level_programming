#include "lists.h"

/**
 * delete_dnodeint_at_index - Function to delete node at index
 * @head: the head pointer
 * @index: the index of the node to be deleted
 * Return: If Success, Return 1, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

		return (1);
	}

	temp = *head;
	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);

	temp->prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
