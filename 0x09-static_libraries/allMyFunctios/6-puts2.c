#include "main.h"

/**
 * puts2 - a function
 * @str: parameter
 */

void puts2(char *str)
{
	int leo = 0;
	int bee = 0;

	while (str[leo] != '\0')
	{
		leo++;
	}
	while (bee < leo)
	{
		_putchar(str[bee]);
		bee += 2;
	}
	_putchar('\n');
}
