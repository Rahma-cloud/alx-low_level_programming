#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function
 * @str: param
 * Return: 0
 */

char *_strdup(char *str)
{
	size_t g;
	char *new_st;
	size_t x;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[g] != '\0')
	{
		g++;
	}
	new_st = malloc((g + 1) * sizeof(char));
	if (new_st == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= g; x++)
	{
		new_st[x] = str[x];
	}
	return (new_st);
	free(new_st);
}
