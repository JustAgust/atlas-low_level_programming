#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer that points to beginning of list
 * @index: int to be deleted
 * Return: 1 if succes, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *node, *nodelist;

	if (*head == NULL)
	{
		return (-1);
	}
	nodelist = *head;
	if (index == 0)
	{
		nodelist = (*head)->next;
		free(*head);
		*head = nodelist;
		return (1);
	}
	while (i < index && nodelist->next != NULL)
	{
		node = nodelist;
		nodelist = nodelist->next;
		i++;
	}
	if (i < index)
	{
		return (-1);
	}
	node->next = nodelist->next;
	free(nodelist);
	return (1);
}
