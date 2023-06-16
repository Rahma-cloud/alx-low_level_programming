#include "lists.h"

/**
 * print_dlistint - a function
 * @h: parameter
 * Return: 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr;

	if (h == NULL)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		count = count + 1;
		printf("%d\n", (*ptr).n);
		ptr = (*ptr).next;
	}
	return (count);
}
