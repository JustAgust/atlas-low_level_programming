#include <string.h>
#include "lists.h"
/**
 *add_node_end - adds a node to the end.
 *@head: pointer to the head of list.
 *@str: string to be stored in the new node.
 *Return: Address of new node, or NULL if mem fail.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *current;
	unsigned int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		free(temp);
	return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = temp;
	}
	return (temp);
}
