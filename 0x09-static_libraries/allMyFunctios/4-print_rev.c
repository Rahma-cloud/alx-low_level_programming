#include "main.h"

/**
 * print_rev - a function
 * @s: parameter
 */

void print_rev(char *s)
{
	int ray = 0;

	while (s[ray] != '\0')
	{
		ray++;
	}
	ray -= 1;
	while (ray >= 0)
	{
		_putchar(s[ray]);
		ray--;
	}
	_putchar('\n');
}
