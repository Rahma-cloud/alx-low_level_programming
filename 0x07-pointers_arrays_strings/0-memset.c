#include "main.h"

/**
 * _memset - a function
 * @s: param
 * @b: param
 * @n: param
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
