#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with key
 * @ht: table to retrieve from
 * @key: key to get value from
 * Return: returns value associated with element, or NULL if no key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
