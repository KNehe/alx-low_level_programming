#include <stdlib.h>
#include "holberton.h"

/**
  * array_range - Createa an array of integers
  * @min: minimum
  * @max: maximum
  * Return: Pointer to new created array,,else NULL
*/
int *array_range(int min, int max)
{
	int *arr, j;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min) + 1) * sizeof(*arr));

	if (arr == NULL)
		return (NULL);

	for (j = 0; min <= max; min++, j++)
		arr[j] = min;

	return (arr);

}
