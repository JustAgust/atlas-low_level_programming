#include "lists.h"
/**
*dlistint_len - returns number of elements
*@h: doubly linked list
*Return: element count
*/
size_t dlistint_len(const dlistint_t *h)
{
    size_t i = 0;
    while (h != NULL)
    {
    i++;
    h = h->next;
    }
    return (i);
}