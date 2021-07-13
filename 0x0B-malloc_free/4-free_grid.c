#include <stdlib.h>
#include "holberton.h"

/**
  * free_grid - Frees space for 2D array created by all0cc_grid
  * @grid: Pointer to 2D array
  * @height: Height of the grid
  * Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

