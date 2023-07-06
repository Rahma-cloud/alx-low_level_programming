#include "hash_tables.h"

/**
 * hash_table_set - a function
 * @key:: parameter
 * @value: parameter
 * @ht: param
 * Return: 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	node_t *new_node = malloc(sizeof(node_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (new_node->key == NULL || (value != NULL && new_node->value == NULL))
	{
		free(new_node);
		return (0);
	}

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
