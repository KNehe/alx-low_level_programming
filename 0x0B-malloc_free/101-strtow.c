#include "holberton.h"
#include <stdlib.h>

/**
  * ch_free_grid - Frees a 2-D array.
  * @grid: Double pointer to 2-D char array
  * @height: height of grid
  * Return: void
*/
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
  * strtow - splits a string into words.
  * @str: Pointer to string
  * Return: Pointer to an array of words
*/
char **strtow(char *str)
{
	char **arr;
	unsigned int c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	arr = malloc((height + 1) * sizeof(char *));
	if (arr == NULL || height == 0)
	{
		free(arr);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				arr[i] = malloc((c - k + 2) * sizeof(char));
				if (arr[i] == NULL)
				{
					ch_free_grid(arr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; k++, j++)
			arr[i][j] = str[k];
		arr[i][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}
