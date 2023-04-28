#include "lists.h"

/**
 * free_list - a function
 * @head: param
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NUll)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
