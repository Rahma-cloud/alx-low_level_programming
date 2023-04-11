#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function
 * @grid: param
 * @height: param
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int ray;

	for (ray = 0; ray < height; ray++)
	{
		free(grid[ray]);
	}
	free(grid);
}
