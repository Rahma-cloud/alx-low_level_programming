#include "main.h"
/**
 * times_table - function
 * Return (0)
 */

void times_table(void)
{
int i, j, result;

for (i = 0; i <= 9; i++)
{
_putchar('0');
for (j = 0; j <= 9; i++)
{
_putchar(',');
_putchar(' ');
result = 9 * i;
if (result <= 9)
{
	_putchar(' ');
}
else
{
	_putchar((result / 10) + '0');
}
_putchar ((result % 10) + '0');
}
_putchar('\n');
}
}
