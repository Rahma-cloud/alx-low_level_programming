#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function
 * @width: param
 * @height: param
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **x;

	if (height < 1)
	{
		return (NULL);
	}
	x = (int **) malloc(sizeof(x) * height);
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int) * width);
		if (x[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(x[j]);
			}
			free(x);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			x[i][j] = 0;
		}
	}
	return (x);
}
