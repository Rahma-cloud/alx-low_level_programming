#include "main.h"

/**
 * puts_half - a function
 * @str: parameter
 * Return - 0
 */

void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{
		b = a / 2;
	}
	else
	{
		b = (a + 1) / 2;
	}
	while (b < a)
	{
		_putchar(str[a]);
		b++;
	}
	_putchar('\n');
}
