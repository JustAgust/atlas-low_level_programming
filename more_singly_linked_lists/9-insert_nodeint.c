#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position.
 * @head: pointer to a pointer/beginning pointer to list.
 * @idx: index where new node is to be inserted
 * @n: node to be inserted
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int indx, int n)
{
	listint_t *nodelist, *node;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	if (*head == NULL)
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	if (idx == 0) /*node inserts in the beginning*/
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	nodelist = *head;
	while (i < idx - 1 && nodelist != NULL)
	{
		nodelist = nodelist->next;
		i++;
	}
	if (i < idx - 1) /*idx is longer than nodelist length*/
	{
		return (NULL);
	}
	node->n = n;
	node->next = nodelist->next;
	nodelist->next = node;
	return (node);
}
