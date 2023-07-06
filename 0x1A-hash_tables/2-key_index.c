#include "hash_tables.h"

/**
 * key_index - a function
 * @key: param
 * @size: param
 * Return:0
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
