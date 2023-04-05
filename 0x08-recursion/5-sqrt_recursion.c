#include "main.h"

/**
 * _sqrt_recursion - a function
 * @n: param
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt_recursion(_pow_recursion(n, 1 / 2)));
	}
}
