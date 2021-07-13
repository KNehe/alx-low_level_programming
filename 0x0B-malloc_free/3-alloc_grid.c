#include <stdlib.h>
#include "holberton.h"

/**
  * alloc_grid - Allocates space for 2D array of ints
  * @width: Width of the grid
  * @height: Height of the grid
  * Return: Pointer to the array, 0 if width or height is 0,
  * else NULL if it fails
*/

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(**arr) * width);
		if (arr[i] == 0)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}

