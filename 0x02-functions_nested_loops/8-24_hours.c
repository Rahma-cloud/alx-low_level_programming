#include "main.h"
/**
 * jack_bauer - function
 * Return: (0)
 */

void jack_bauer(void)
{
	int h;

	for (h = 0; h < 24; h++)
	{
		int m;
		for (m = 0; m < 60; m++)
		{
			_putchar ((h / 10) + '0');
			_putchar ((h % 10) + '0');
			_putchar (':');
			_putchar ((m / 10) + '0');
			_putchar ((m % 10) + '0');
			_putchar ('\n');
		}
	}
}
