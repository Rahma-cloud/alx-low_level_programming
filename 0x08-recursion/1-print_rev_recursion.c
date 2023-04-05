#include "main.h"

/**
 * _print_rev_recursion - a function
 * @s: param
 * Return:
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
