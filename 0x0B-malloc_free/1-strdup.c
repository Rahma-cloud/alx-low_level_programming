#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function
 * @str: param
 * Return: 0
 */

char *_strdup(char *str)
{
	int g = 1;
	char *new_st;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[g])
	{
		g++;
	}
	new_st = malloc((g * sizeof(char)) + 1);
	if (new_st == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < g; x++)
	{
		new_st[x] = str[x];
	}
	new_st[x] = '\0';
	return (new_st);
}
