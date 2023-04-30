#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function
 * @h: parameter
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num_nodes;

	num_nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
