#include "lists.h"

/**
 * list_len - a function
 * @h: param
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	int cul;

	cul = 0;
	while (h != NULL)
	{
		cul++;
		h = h->next;
	}
	return (cul);
}
