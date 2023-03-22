#include "main.h"
/**
 * jack_bauer - function
 * Return: (0)
 */

void jack_bauer(void)
{
	int h = 0;

	for (h < 24; h++)
	{
		int m = 0;

		for (m < 60; m++)
		{
			_putchar ((m / 10) + '0');
			_putchar ((m % 10) + '0');
			_putchar (':');
			_putchar ('\n');
		}
		_putchar ((h / 10) + '0');
		_putchar ((h % 10) + '0');
		_putchar (':');
		_putchar ('\n')
	}
}
