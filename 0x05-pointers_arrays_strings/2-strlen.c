#include "main.h"

/**
 * _strlen - function
 * @s: parameter
 * Return: 0
 */

int _strlen(char *s)
{
	int leo;

	leo = 0;
	while (*s != '\0')
	{
		leo++;
		s++;
	}
	return (leo);
}
