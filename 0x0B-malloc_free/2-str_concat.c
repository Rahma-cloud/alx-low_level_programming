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
	char *temp;
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
	while (s2[len1] != '\0')
	{
		len1++;
	}
	while (s2(len2) != '\0')
	{
		len2++;
	}
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	temp = result;

	for (m = 0; m < len1; m++)
	{
		temp[len1 + m] = s2[m];
	}
	temp[len1 + len2] = '\0';
	return (result);
}
