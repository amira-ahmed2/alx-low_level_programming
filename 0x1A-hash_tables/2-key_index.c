#include "hash_tables.h"

/**
 * key_index - that gives you the index of a key.
 * @key: key to get index.
 * @size: size of array.
 *
 * Return: the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
