#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at index
 * @head: pointer to head of list
 * @index: the node we are to retrieve
 * Return: NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == n)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL)
}
