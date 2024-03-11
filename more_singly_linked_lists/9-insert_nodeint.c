#include "list.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position.
 * @head: pointer to a pointer/beginning pointer to list.
 * @idx: index where new node is to be inserted
 * @n: node to be inserted
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int indx, int n)
{

