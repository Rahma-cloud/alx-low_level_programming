#include "lists.h"

/**
 * free_list - a function
 * @head: param
 */

void free_list(list_t *head)
{
	list_t *tmp;

	for (tmp = head; head != NULL; head = head->next)
	{
		free(tmp->str);
		free(tmp);
	}
}
