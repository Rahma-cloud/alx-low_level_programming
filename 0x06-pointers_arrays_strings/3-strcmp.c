#include "main.h"

/**
 * _strcmp - a function
 * @s1: param
 * @s2: param
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] == s2[i])
	{
		if (s1 != '\0')
		{
			return (0);
		}
		i++;
	}
	return ((int)(s1[i] - s2[i]));
}
