#include "lists.h"


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *temp = *head, *new;
    new = malloc(sizeof(dlistint_t));
    if(new == NULL)
    {
        return NULL;
    }
    new->n = n;
    if(*head == NULL)
    {
        new->prev = NULL;
        *head = new;
        return new;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    new->prev = temp;
    temp->next = new;

    return (new ? new : NULL);
}
