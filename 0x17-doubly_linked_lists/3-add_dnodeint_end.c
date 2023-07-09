#include "lists.h"


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *temp = head, *new;
    new = malloc(sizeof(dlistint_t));
    if(!new)
    {
        return NULL;
    }
    new->n = n;
    while(temp)
    {
        temp = temp->next;
    }
    if(temp->next == NULL)
    {
        new->prev = temp;
        temp->next = new;
    }
    return (new ? new : NULL);
}
