#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a table
 * @size: parameter
 * Return: 0
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->size = size;

	return (hash_table);
}
