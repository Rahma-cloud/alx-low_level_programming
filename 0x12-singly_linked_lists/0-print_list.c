#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function
 * @h: a param
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	int *x;
	int y = 0;

	for (x = 0; x != NULL; x++)
	{
		printf("%u %s\n", x->len, x->str);
		x = x->next;
		y++;
	}
	return (y);
}
