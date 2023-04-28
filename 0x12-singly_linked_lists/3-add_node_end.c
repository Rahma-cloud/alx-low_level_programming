`#include "lists.h"

/**
 * add_node_end - singly list node add function
 * @head: param
 * @str: param
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *me;
	list_t *tail;

	me = malloc(sizeof(list_t));
	if (me == NULL)
	{
		return (NULL);
	}
	me->str = strdup(str);
	me->len = strlen(str);
	me->next = NULL;
	if (*head == NULL)
	{
		*head = me;
		tail = me;
	}
	else
	{
		tail = *head;
		while (*tail->next != NULL)
		{
			tail = tail->me;
		}
	}
	return (me);
}
