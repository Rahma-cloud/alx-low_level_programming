#include "variadic_functions.h"

/**
 * sum_them_all - a function
 * @n: param
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int add;
	unsigned int x;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		add = 0;
		va_start(args, n);
		for (x = 0; x < n; x++)
		{
			add = add + va_arg(args, int);
		}
		va_end(args);
		return (add);
	}

}
