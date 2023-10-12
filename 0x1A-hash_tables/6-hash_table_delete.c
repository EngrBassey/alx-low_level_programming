#include "hash_tables.h"

/**
 * hash_table_delete - Destroys hash table and free memory
 * @ht: Hash table struct to destroy
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *tmp, *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}

