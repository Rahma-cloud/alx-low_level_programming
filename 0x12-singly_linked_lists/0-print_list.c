#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function
 * @h: a param
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	int num;

	num = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		num++;
		h = h->next;
	}
	return (num);
}
