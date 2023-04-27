#include "lists.h"

/**
 * print_list - a function
 * @h: a parameter
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
