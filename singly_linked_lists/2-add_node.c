#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds new node to beginning
 * @head: a pointer that points to list
 * @str: the string to be duplicated
 * Return: A list_t type list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head == NULL || str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL):wq
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
