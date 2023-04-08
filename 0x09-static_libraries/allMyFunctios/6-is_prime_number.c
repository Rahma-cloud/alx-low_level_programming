#include "main.h"

/**
 * is_prime_number_helper - a function
 * @a: param
 * @b: param
 * Return: 0
 */

int is_prime_number_helper(int a, int b)
{
	if (b == a)
	{
		return (1);
	}
	if (a % b == 0)
	{
		return (0);
	}
	return (is_prime_number_helper(a, b + 1));
}

/**
 * is_prime_number - a function
 * @n: param
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_number_helper(n, 2));
}
