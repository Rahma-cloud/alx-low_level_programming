#include "main.h"

/**
 * _strchr - a function
 * @s: param
 * @c: param
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
