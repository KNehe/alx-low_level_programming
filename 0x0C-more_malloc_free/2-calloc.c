#include <stdlib.h>
#include "holberton.h"

/**
  * _memset - Fills the first n bytes of the memory area
  * a with the byte b
  * @s: Pointer to memory to be filled
  * @b: Contant byte
  * @n: Number of bytes
  * Return: Pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
  * _calloc - Allocates memory for an array
  * @nmemb: Number of elements
  * @size: Bytes of each element
  * Return: Pointer to allocated memory,else NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}
