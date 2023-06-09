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
	if (a % 2 == 1)
	{
		b = (a - 1) / 2;
		b += 1;
	}
	else
	{
		b = a / 2;
	}
	while (b < a)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
