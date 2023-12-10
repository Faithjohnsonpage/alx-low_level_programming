#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts new node at a given position.
 * @h: the head pointer
 * @idx: the index of the list where the new node should be added
 * @n: the data to be added to the list.
 * Return: the pointer to the new node added.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newnode;
	unsigned int i;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	temp = *h;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->prev = temp;
	newnode->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = newnode;

	temp->next = newnode;
	return (newnode);
}
