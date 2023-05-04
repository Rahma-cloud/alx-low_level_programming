#include "main.h"

/**
 * flip_bits - a function
 * @n: parameter
 * @m: parameter
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y = n ^ m;
	unsigned int i = 0;

	while (y != 0)
	{
		i += y & 1;
		y >>= 1;
	}
	return (i);
}
