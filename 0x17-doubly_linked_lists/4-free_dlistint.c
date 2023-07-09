#include "lists.h"


void free_dlistint(dlistint_t *head)
{  
    dlistint_t **temp = &head;
    (*temp)->prev = *temp;
    *temp = (*temp)->next;
    while(*temp)
    {
        free((*temp)->prev);
    }
    free(*temp);
}