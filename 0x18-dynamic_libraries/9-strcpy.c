#include "main.h"

/**
 * *_strcpy - a function
 * @dest: parameter
 * @src: parameter
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int ray;

	for (ray = 0; src[ray] != '\0'; ray++)
	{
		dest[ray] = src[ray];
	}
	dest[ray++] = '\0';

	return (dest);
}
