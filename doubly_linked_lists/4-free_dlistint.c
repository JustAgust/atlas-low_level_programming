#include "lists.h"
/**
 * free_dlistint - frees the list!
 * @head: pointer to head of list, where to begin the attack!
 * Return: Success! technically returns nothing which is success.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
