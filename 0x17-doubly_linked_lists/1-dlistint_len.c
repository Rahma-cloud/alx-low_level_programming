#include "lists.h"

/**
 * dlistint_len - a function
 * @h: parameter
 * Return: 0
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current;

	if (h == NULL)
	{
		return (0);
	}
	current = h;
	while (current != NULL)
	{
		count++;
		current = (*current).next;
	}
	return (count);
}
