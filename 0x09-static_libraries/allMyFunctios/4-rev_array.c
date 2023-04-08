#include "main.h"

/**
 * reverse_array - a function
 * @n: param
 * @a: param
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int x;

	while (i < n--)
	{
		x = a[i];
		a[i++] = a[n];
		a[n] = x;
	}
}
