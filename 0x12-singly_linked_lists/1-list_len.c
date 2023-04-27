#include "lists.h"

/**
 * list_len - a function
 * @h: a parameter
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	int num;

	num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
