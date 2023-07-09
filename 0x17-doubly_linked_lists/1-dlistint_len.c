#include "lists.h"


size_t dlistint_len(const dlistint_t *h)
{
    size_t num = 0;
    dlistint_t *temp = (dlistint_t *) h;
    while(temp)
    {
        num++;
        temp = temp->next;
    }
    return (num);
}