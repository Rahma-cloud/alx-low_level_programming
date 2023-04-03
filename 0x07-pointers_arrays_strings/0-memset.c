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
	for (int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
