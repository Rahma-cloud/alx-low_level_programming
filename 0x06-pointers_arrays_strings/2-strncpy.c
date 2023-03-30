#include "main.h"

/**
 * _strncpy - a function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; n > i; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
