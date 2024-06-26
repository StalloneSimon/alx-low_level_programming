#include "hash_tables.h"

/**
 * key_index - implementation of the djb2 algorithm
 * @key: string used to create a hash value
 * @size: size of the hash table
 * Return: (index of hash table)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !size)
		return (0);
	return (hash_djb2(key) % size);
}
