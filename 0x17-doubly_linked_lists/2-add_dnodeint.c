#include "lists.h"

/**
 * add_dnodeint - a function
 * @n: parameter
 * @head: parameter
 * Return: 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new;
	return (new);
}
