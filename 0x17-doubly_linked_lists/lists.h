#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n:integer
 * @prev: parameter that points to the prev node
 * @next: parameter that points to the next node
 *
 * Description: this is for doubly linked lists
 */

tydef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#end /* LISTS_H */
