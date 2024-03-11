#include "lists.h"

/**
 * sum_listint - sums up all the data in the list
 * @head: points to beginning of list
 * Return: either returns sum or 0 is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
