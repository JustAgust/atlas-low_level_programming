#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data of the dlist
 * @head: pointer to head of dlistint_t
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
