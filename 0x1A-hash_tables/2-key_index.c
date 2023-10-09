#include "hash_tables.h"

/**
 * key_index - generates key using hash_djb2
 * @key: pointer to the key
 * @size: size table
 *
 * Return: index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
