#include "holberton.h"
/**
  * _memcpy - Copies n bytes from memory ares *src
  * to memory area dest
  * @dest: Pointer to string to be copied to
  * @src: Pointer to string to be copied from
  * @n: Number of bytes to copy
  * Return: Pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);

}

