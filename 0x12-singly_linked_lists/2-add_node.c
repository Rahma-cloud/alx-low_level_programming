#include "lists.h"

/**
 * add_node - singly list node add function
 * @head: param
 * @str: param
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *me;

	me = malloc(sizeof(list_t));
	if (me == NULL)
	{
		return (NULL);
	}
	me->str = strdup(str);
	me->len = strlen(str);
	me->next = *head;
	*head = me;
	return (me);
}
