#include "main.h"

/**
 * string_toupper - a funtion
 * @leo: parameter
 * Return: leo
 */

char *string_toupper(char *leo)
{
	int ray = 0;

	while (leo[ray] != '\0')
	{
		if (leo[ray] >= 'a' && leo[ray] <= 'z')
		{
			leo[ray] -= 32;
		}
		ray++;
	}
	return (leo);
}
