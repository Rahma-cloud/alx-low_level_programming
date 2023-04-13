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
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c;
	unsigned int d;
	char *me;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (b > n)
		b = n;
	else
		n = b;
	c = a + b + 1;
	me = malloc(sizeof(char) * c);
	if (me == NULL)
		return (NULL);
	for (d = 0; d < c - 1; d++)
	{
		if (d < a)
			me[d] = s1[d];
		else
			me[d] = s2[d - a];
	}
	me[c - 1] = '\0';
	return (me);
}
