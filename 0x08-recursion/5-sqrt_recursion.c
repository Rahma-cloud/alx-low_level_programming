#include "main.h"

/**
 * _st_recursion - a function
 * @m: param
 * @n: param
 * Return: 0
 */

int _st_recursion(int m, int n)
{
	int x;

	x = (m + n / m) / 2;
	if (m * m <= n && ((m + 1) * (m + 1)) > n)
	{
		return (m);
	}
	else
	{
		return (_st_recursion(x, n));
	}
}

/**
 * _sqrt_recursion - a function
 * @n: param
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 1)
	{
		return (-1);
	}
	return (_st_recursion(1, n));
}
