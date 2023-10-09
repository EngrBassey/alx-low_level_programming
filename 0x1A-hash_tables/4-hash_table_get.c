#include "hash_tables.h"

/**
  * hash_table_get - function that retrives hash values
  * @ht: pointer pointing to the key
  * @key: the key to the value
  * Return: returns the key value
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int get_index;

	if (key == NULL || ht == NULL)
		return (NULL);

	get_index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[get_index];

	for (; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
	}

	return (NULL);
}
