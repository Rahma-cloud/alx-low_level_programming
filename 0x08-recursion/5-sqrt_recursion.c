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

	x = 0.5 * (n + m / n);
	if (x == n)
	{
		return (n);
	}
	else if (x == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - a function
 * @n: param
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (_st_recursion(n, n / 2));
}
