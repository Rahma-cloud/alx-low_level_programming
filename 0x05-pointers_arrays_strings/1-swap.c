#include "main.h"

/**
 * swap_int - function
 * @a: parameter
 * @b: parameter
 */

void swap_int(int *a, int *b)
{
	int leo = *a;
	*a = *b;
	*b = leo;
}
