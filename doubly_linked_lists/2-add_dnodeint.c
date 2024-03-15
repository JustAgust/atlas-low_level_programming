#include "lists.h"
/**
 * add_dnodeint - adds a node to beginning of list
 * @head: pointer to a pointer at head/beginning of list
 * @n:added node
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	
		(*head)->prev = new;
		
	*head = new;	

	
	return (new);
}
