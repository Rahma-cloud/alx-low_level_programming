#include "main.h"

/**
 * _memcpy - a function
 * @dest: param
 * @src: param
 * @n: param
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
