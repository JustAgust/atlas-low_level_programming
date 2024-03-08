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
	unsigned int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	while (str[len])
		len++

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = len;
	temp->next = *head;
	*head = temp;

	return (temp);
}
