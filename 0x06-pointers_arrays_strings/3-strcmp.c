#include "main.h"

/**
 * _strcmp - a function
 * @s1: param
 * @s2: param
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int x;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	x = s1[i] - s2[i];
	return (x);
}
