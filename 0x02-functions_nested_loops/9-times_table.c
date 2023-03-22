#include "main.h"
/**
 * times_table - function
 * Return (0)
 */

void times_table(void)
{
int i, j, result;

for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 9; i++)
{
result = 9 * i;
if (result > 9)
{
	_putchar((result / 10) + '0');
}
else
{
	_putchar(' ');
}
}
_putchar((result % 10) + '0');
if (1 != 10)
{
	_putchar(',');
	_putchar(' ');
}
}
_putchar('\n');
}
