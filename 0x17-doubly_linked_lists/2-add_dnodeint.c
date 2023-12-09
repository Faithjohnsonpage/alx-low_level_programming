#include "lists.h"

/**
  * add_dnodeint - Adds a new node at the beginning of a list
  * @head: the head pointer.
  * @n: the element to be added to the list
  * Return: the added node.
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		(*head)->prev = newnode;
		newnode->next = *head;
		*head = newnode;
	}

	return newnode;
}
