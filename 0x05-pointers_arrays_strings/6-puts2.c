#include "main.h"

/**
 * puts2 - a function
 * @str: parameter
 */

void puts2(char *str)
{
	int leo;

	while (str[leo] != '\0')
	{
		if (leo % 2 == 0)
		{
			_putchar(str[leo]);
		}
		leo++;
	}
	_putchar('\n');
}
