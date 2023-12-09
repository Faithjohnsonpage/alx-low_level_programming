#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the beginning of a list
 * @head: the head pointer.
 * @n: the element to be added to the list
 * Return: the added node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newnode;
		newnode->prev = temp;
	}

	return (newnode);
}
