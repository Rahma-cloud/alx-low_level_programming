#include "main.h"

/**
 * _strspn - a function
 * @s: param
 * @accept: param
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;

	while (*s != '\0')
	{
		char *ray = accept;

		while (*ray != '\0')
		{
			if (*s == *ray)
			{
				m++;
			}
			ray++;
		}
	if (*ray == '\0')
	{
		return (m);
	}
	s++;
	}
	return (m);
}
