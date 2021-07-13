#include <stdlib.h>
#include "holberton.h"

/**
  * create_array - Creates an array of chars,
  * and initializes it with a specific char
  * @size: size of memory to reserve
  * @c: Char to initialize array with
  * Return: NULL if size = 0, pointer to array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size);
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

