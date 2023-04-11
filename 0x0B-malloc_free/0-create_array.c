#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function
 * @size: param
 * @c: param
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *p = (char *) malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
	free(p);
}
