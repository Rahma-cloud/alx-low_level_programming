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
	int a, b, c, d;
	char *ptr, *me;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		;
	}
	d = (a + n) * sizeof(*ptr);
	ptr = malloc(size + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < d && s1[b] != '\0'; b++)
	{
		ptr[b] = s1[b];
	}
	for (c = 0; b < d && s2[c] != '\0'; c++)
	{
		ptr[b] = s2[c];
	}
	ptr[b] = '\0';
	return (ptr);
}

