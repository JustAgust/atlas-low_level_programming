#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: gets added
 * @value: gets added
 * Return: 1 for success, 0 otherwise]
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL, *temp = NULL;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)(key), ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else if (strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->key);
		free(ht->array[index]->value);
		free(ht->array[index]);
		ht->array[index] = node;
	}
	else
	{
		temp = ht->array[index];
		node->next = temp;
		ht->array[index] = node;
	}
	return (1);
}
