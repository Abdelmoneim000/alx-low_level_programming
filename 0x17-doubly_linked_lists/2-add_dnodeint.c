#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t) + 4);
    if (new == NULL)
    {
        return (NULL);
    }
    new->next = *head;
    new->prev = NULL;
    new->n = n;
    if (*head != NULL)
    {
        (*head)->prev = new;
    }
    *head = new;

    return (*head);
}