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
	char *dup_val;
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	dup_val = strdup(value);
	if (dup_val == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_val);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(dup_val);
		free(new_node);
		return (0);
	}

	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
	}
	ht->array[index] = new_node;
	return (1);
}
