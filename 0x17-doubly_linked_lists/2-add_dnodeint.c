#include "lists.h"

/**
 * add_dnodeint - a function
 * @n: parameter
 * @head: parameter
 * Return: 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	new->next = *head;
	if (*head != NULL)
	{
		(*head).prev = new;
	}
	*head = new;

	return (new);
}
