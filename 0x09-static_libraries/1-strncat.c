#include "main.h"

/**
 * _strncat - a function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int ray;
	int leo;

	for (ray = 0; dest[ray] != '\0'; ray++)
	{
		;
	}
	for (leo = 0; src[leo] != '\0' && n > 0; leo++, n--, ray++)
	{
		dest[ray] = src[leo];
	}
	return (dest);
}
