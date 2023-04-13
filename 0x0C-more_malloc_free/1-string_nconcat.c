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
	int a, b, c;
	char *ptr;

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
	for (b = 0; s2[b] != '\0'; b++)
	{
		;
	}
	ptr = malloc(sizeof(char) * (a + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		ptr[c] = s1[a];
	}
	for (c = 0; c < n && c < b; c++)
	{
		ptr[b + c] = s2[c];
	}
	ptr[b + c] = '\0';
	return (ptr);
}

