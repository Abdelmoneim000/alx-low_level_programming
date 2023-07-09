#include "lists.h"

void free_dlistint(dlistint_t *head)
{  
    dlistint_t *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        free(temp->prev);
        if (temp != NULL)
            temp->prev->next = NULL;
    }
}
