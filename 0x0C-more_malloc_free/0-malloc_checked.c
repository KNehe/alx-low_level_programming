#include <stdlib.h>
#include "holberton.h"

/**
  * malloc_checked - Allocates memory
  * @b: Number of ints to be stored
  * Return: Pointer to allocated memory,
  * else exit with code 98
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
