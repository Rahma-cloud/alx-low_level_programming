#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function
 * @a: param
 * @size: param
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; i < (size * size); i = i + size + 1)
	{
		j = j + a[i];
	}
	for (i = size - 1; i < (size * size - 1); i = i + size - 1)
	{
		k = k + a[i];
	}
	printf("%d, %d\n", j, k);
}
