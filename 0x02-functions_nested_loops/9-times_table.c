#include "main.h"
/**
 * times_table - function
 * Return (0)
 */

void times_table(void)
{
	int i, result;
	for (i = 0; i <= 10; i++)
	{
		result = 9 * i;
	}
	if (result > 9)
	{
		_putchar((result / 10) + '0');
	}
	else
	{
		_putchar(' ');
        }
	
	_putchar((result % 10) + '0');
	if (i != 10)
	{
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
