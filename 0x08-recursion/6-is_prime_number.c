#include "main.h"

/**
 * is_prime_number
 * @n: param
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n < 2 && n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
