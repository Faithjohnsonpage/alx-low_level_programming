#include "lists.h"

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
