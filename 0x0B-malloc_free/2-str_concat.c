#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function
 * @s1: param
 * @s2: param
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int m;
	int n;
	char *result; if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	n = len1 + len2 + 1;
	result = malloc(n * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < n; m++)
	{
		if (m < len1)
		{
			result[m] = s1[m];
		}
		else
		{
			result[m] = s2[m - len1];
		}
	}
	return (result);
}
