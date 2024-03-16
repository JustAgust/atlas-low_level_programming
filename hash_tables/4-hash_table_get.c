#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with key
 * @ht: table to retrieve from
 * @key: key to get value from
 * Return: returns value associated with element, or NULL if no key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)(key), ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (node->value == NULL)
				return (NULL);
			else
				return (node->value);
		}
		else
			node = node->next;
	}
		return (NULL);
}
