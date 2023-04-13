#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function
 * @s1: param
 * @s2: param
 * @n: param
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a = 0;
	int b = 0;
	int c;
	int d;
	char *me;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	n = a + b + 1;
	me = malloc(n * sizeof(char));
	if (me == NULL)
	{
		me(NULL);
	}
	for (c = 0; c < n; c++)
	{
		if (c < a)
		{
			me[c] = s1[c];
		}
		else
		{
			me[c] = s2[c - a]
		}
	}
	return (me);
}

