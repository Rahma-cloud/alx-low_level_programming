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
	for (leo = 0; src[leo] != '\0'; leo++)
	{
		dest[ray] = src[leo];
		ray++;
	}
	return (dest);
}
