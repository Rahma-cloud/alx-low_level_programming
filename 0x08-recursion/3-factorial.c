#include "main.h"

/**
 * factorial - a function
 * @n: param
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
