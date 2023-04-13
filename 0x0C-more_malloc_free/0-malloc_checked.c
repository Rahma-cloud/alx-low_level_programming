#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function
 * @b: param
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	int *me;

	me = malloc(b);
	if (me == NULL)
	{
		free(me);
		exit(98);
	}
	return (me);
}
