#include "main.h"

/**
 * _sqrt_recursion - a function
 * _pow_recursion - a funnction
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
		return (_sqrt_recursion(_pow_recursion(n, 0.5)));
	}
}
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
