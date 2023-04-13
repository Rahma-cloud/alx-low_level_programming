#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function
 * @min: param
 * @max: param
 * Return: 0
 */

int *array_range(int min, int max)
{
	int x, y;
	int *me;

	if (min > max)
	{
		return (NULL);
	}
	x = max - min + 1;
	me = malloc(x * sizeof(int));
	if (me == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < x; y++)
	{
		me[y] = min + y;
	}
	return (me);
}
