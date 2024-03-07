#include "lists.h"

/*
 * list_len - lists number of elements
 * @h: points to the head node
 * Return: returns number of elements in list
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
