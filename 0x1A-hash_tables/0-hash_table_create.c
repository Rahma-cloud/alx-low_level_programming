#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a table
 * @size: parameter
 * Return: 0
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **array;

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = array;

	return (hash_table);
}
