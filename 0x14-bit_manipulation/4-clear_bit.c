#include "main.h"

/**
 * clear_bit - a function
 * @n: parameter
 * @index: parameter
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hide;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	hide = 1UL << index;
	*n &= ~hide;
	return (1);
}
